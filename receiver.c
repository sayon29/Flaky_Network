#include <arpa/inet.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

// The maximum sequence number we expect. 
#define MAX_SEQ 65535 

/* * An array to track which frames have already been forwarded.
 * All redundancy logic is handled proactively by the sender.
 */
bool has_been_played[MAX_SEQ] = {false};

int main(void) {
    // Setup the incoming socket from the hostile relay
    int relay_in_fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in relay_in_addr = {0};
    relay_in_addr.sin_family = AF_INET;
    relay_in_addr.sin_port = htons(47002);
    relay_in_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    bind(relay_in_fd, (struct sockaddr *)&relay_in_addr, sizeof(relay_in_addr));

    // Setup the outgoing socket to the harness player
    int player_out_fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in player_addr = {0};
    player_addr.sin_family = AF_INET;
    player_addr.sin_port = htons(47020);
    player_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    unsigned char buf[2048];

    for (;;) {
        ssize_t bytes_read = recvfrom(relay_in_fd, buf, sizeof(buf), 0, NULL, NULL);
        if (bytes_read <= 0) continue;

        // The first 4 bytes of the payload contain the network-byte-order sequence number
        uint32_t seq = ntohl(*(uint32_t*)buf);

        // Drop corrupted or massively delayed packets to prevent buffer overflow
        if (seq >= MAX_SEQ) continue;

        /*
         * Stateless Playout:
         * We don't care if this is the primary packet or the 1ms-staggered echo.
         * The first valid copy to arrive safely wins the race and gets forwarded.
         * Any subsequent copies are silently dropped.
         */
        if (!has_been_played[seq]) {
            has_been_played[seq] = true;
            sendto(player_out_fd, buf, (size_t)bytes_read, 0, (struct sockaddr *)&player_addr, sizeof(player_addr));
        }
    }
    return 0;
}