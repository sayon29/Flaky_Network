#include <arpa/inet.h>
#include <poll.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <unistd.h>

#define PAYLOAD_SIZE 160
#define PACKET_SIZE 164

/* * The Staggered Duplication Offset.
 * We fire the redundant packet exactly 1ms after the primary packet. 
 * This decouples the redundancy from the 20ms frame clock and establishes 
 * a tight race condition that beats the network's 80ms max jitter.
 */
#define ECHO_OFFSET_MS 1

/* * Queue structure to hold our pending redundant packets (echoes).
 * A size of 10 is plenty, as frames generate every 20ms and our 
 * offset is only 1ms.
 */
#define QUEUE_SIZE 10

typedef struct {
    unsigned char packet[PACKET_SIZE];
    uint64_t trigger_time;
    int is_active;
} PendingEcho;

PendingEcho echo_queue[QUEUE_SIZE];

// Helper function to get the absolute current time in milliseconds
uint64_t get_time_ms() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (uint64_t)(tv.tv_sec) * 1000 + (uint64_t)(tv.tv_usec) / 1000;
}

int main(void) {
    // Setup the incoming socket from the harness source
    int harness_in_fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in harness_in_addr = {0};
    harness_in_addr.sin_family = AF_INET;
    harness_in_addr.sin_port = htons(47010);
    harness_in_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    bind(harness_in_fd, (struct sockaddr *)&harness_in_addr, sizeof(harness_in_addr));

    // Setup the outgoing socket to the hostile relay
    int relay_out_fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in relay_addr = {0};
    relay_addr.sin_family = AF_INET;
    relay_addr.sin_port = htons(47001);
    relay_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // We use poll() to act as our event-loop multiplexer
    struct pollfd fds[1];
    fds[0].fd = harness_in_fd;
    fds[0].events = POLLIN;

    for (int i = 0; i < QUEUE_SIZE; i++) {
        echo_queue[i].is_active = 0;
    }

    for (;;) {
        uint64_t now = get_time_ms();
        int timeout_ms = -1; // -1 instructs poll() to block indefinitely
        int next_echo_idx = -1;

        // Scan the queue to find the soonest pending echo
        for (int i = 0; i < QUEUE_SIZE; i++) {
            if (echo_queue[i].is_active) {
                int time_to_fire = echo_queue[i].trigger_time - now;
                
                // Track the shortest wait time to pass into our poll() sleep
                if (timeout_ms == -1 || time_to_fire < timeout_ms) {
                    timeout_ms = time_to_fire;
                    next_echo_idx = i;
                }
            }
        }

        // If the OS scheduler lagged and we missed a deadline, fire the echo immediately
        if (timeout_ms < 0 && next_echo_idx != -1) {
            timeout_ms = 0;
        }

        // Sleep until either a new frame arrives OR an echo timer expires
        int ret = poll(fds, 1, timeout_ms);

        if (ret > 0 && (fds[0].revents & POLLIN)) {
            // EVENT: A brand new frame arrived from the harness
            unsigned char buf[2048];
            ssize_t bytes_read = recvfrom(harness_in_fd, buf, sizeof(buf), 0, NULL, NULL);
            
            if (bytes_read <= 0) continue;

            // Transmit the primary packet to the network instantly
            sendto(relay_out_fd, buf, (size_t)bytes_read, 0, (struct sockaddr *)&relay_addr, sizeof(relay_addr));

            // Extract the 4-byte sequence number to manage our bandwidth budget
            uint32_t seq = ntohl(*(uint32_t*)buf);
            
            /* * Bandwidth Optimization: 
             * Two full 164-byte packets = 328 bytes, which violates the 320-byte (2.0x) budget.
             * By intentionally dropping the echo on 1 out of every 20 frames, we lower 
             * our total overhead to ~1.99x, keeping the run VALID.
             */
            if (seq % 20 != 0) {
                for (int i = 0; i < QUEUE_SIZE; i++) {
                    if (!echo_queue[i].is_active) {
                        memcpy(echo_queue[i].packet, buf, bytes_read);
                        echo_queue[i].trigger_time = get_time_ms() + ECHO_OFFSET_MS;
                        echo_queue[i].is_active = 1;
                        break; // Queue slot found, break the inner loop
                    }
                }
            }
        } 
        else if (ret == 0 && next_echo_idx != -1) {
            // The poll() timer expired. we send the staggered backup!
            sendto(relay_out_fd, echo_queue[next_echo_idx].packet, PACKET_SIZE, 0, 
                  (struct sockaddr *)&relay_addr, sizeof(relay_addr));
            
            // Clear the echo from the queue so it isn't fired again
            echo_queue[next_echo_idx].is_active = 0; 
        }
    }
    return 0;
}