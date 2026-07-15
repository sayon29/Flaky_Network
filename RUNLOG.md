#RUN LOG

```
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 60
endpoints done
relay done: {'up_bytes': 246000, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 34, 'duplicated': 10}
================ SCORE ================
  frames               : 1500
  deadline misses      : 34  (2.27%)   [cap 1.00%]
  playout delay        : 60 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.02x   [cap 2.00x]   (up 246000B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 60
endpoints done
relay done: {'up_bytes': 439500, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 34, 'duplicated': 10}
================ SCORE ================
  frames               : 1500
  deadline misses      : 7  (0.47%)   [cap 1.00%]
  playout delay        : 60 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 439500B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ ^C
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 40
endpoints done
relay done: {'up_bytes': 439500, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 34, 'duplicated': 10}
================ SCORE ================
  frames               : 1500
  deadline misses      : 75  (5.00%)   [cap 1.00%]
  playout delay        : 40 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 439500B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 50
endpoints done
relay done: {'up_bytes': 439500, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 34, 'duplicated': 10}
================ SCORE ================
  frames               : 1500
  deadline misses      : 14  (0.93%)   [cap 1.00%]
  playout delay        : 50 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 439500B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 60
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 3  (0.20%)   [cap 1.00%]
  playout delay        : 60 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 40
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 29  (1.93%)   [cap 1.00%]
  playout delay        : 40 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 45
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 7  (0.47%)   [cap 1.00%]
  playout delay        : 45 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 42
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 8  (0.53%)   [cap 1.00%]
  playout delay        : 42 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 41
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 9  (0.60%)   [cap 1.00%]
  playout delay        : 41 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 40.5
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 21  (1.40%)   [cap 1.00%]
  playout delay        : 40 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 41
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 851  (56.73%)   [cap 1.00%]
  playout delay        : 41 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 50
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 588  (39.20%)   [cap 1.00%]
  playout delay        : 50 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 60
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 335  (22.33%)   [cap 1.00%]
  playout delay        : 60 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 100
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 12  (0.80%)   [cap 1.00%]
  playout delay        : 100 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 80
endpoints done
relay done: {'up_bytes': 246000, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 81, 'duplicated': 17}
================ SCORE ================
  frames               : 1500
  deadline misses      : 109  (7.27%)   [cap 1.00%]
  playout delay        : 80 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.02x   [cap 2.00x]   (up 246000B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 90
endpoints done
relay done: {'up_bytes': 246000, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 81, 'duplicated': 17}
================ SCORE ================
  frames               : 1500
  deadline misses      : 81  (5.40%)   [cap 1.00%]
  playout delay        : 90 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.02x   [cap 2.00x]   (up 246000B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 70
endpoints done
relay done: {'up_bytes': 439500, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 81, 'duplicated': 17}
================ SCORE ================
  frames               : 1500
  deadline misses      : 239  (15.93%)   [cap 1.00%]
  playout delay        : 70 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 439500B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 90
endpoints done
relay done: {'up_bytes': 439500, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 81, 'duplicated': 17}
================ SCORE ================
  frames               : 1500
  deadline misses      : 29  (1.93%)   [cap 1.00%]
  playout delay        : 90 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 439500B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 70
endpoints done
relay done: {'up_bytes': 439500, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 81, 'duplicated': 17}
================ SCORE ================
  frames               : 1500
  deadline misses      : 354  (23.60%)   [cap 1.00%]
  playout delay        : 70 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 439500B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 90
endpoints done
relay done: {'up_bytes': 439500, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 81, 'duplicated': 17}
================ SCORE ================
  frames               : 1500
  deadline misses      : 81  (5.40%)   [cap 1.00%]
  playout delay        : 90 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 439500B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 100
endpoints done
relay done: {'up_bytes': 438860, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 81, 'duplicated': 17}
================ SCORE ================
  frames               : 1500
  deadline misses      : 81  (5.40%)   [cap 1.00%]
  playout delay        : 100 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 438860B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 100
endpoints done
relay done: {'up_bytes': 438860, 'down_bytes': 0, 'up_pkts': 1500, 'down_pkts': 0, 'dropped': 81, 'duplicated': 17}
================ SCORE ================
  frames               : 1500
  deadline misses      : 81  (5.40%)   [cap 1.00%]
  playout delay        : 100 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.83x   [cap 2.00x]   (up 438860B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
cc -O2 -Wall -o receiver receiver.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 100
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 46  (3.07%)   [cap 1.00%]
  playout delay        : 100 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 100
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 12  (0.80%)   [cap 1.00%]
  playout delay        : 100 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 100
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 12  (0.80%)   [cap 1.00%]
  playout delay        : 100 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 80
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 36  (2.40%)   [cap 1.00%]
  playout delay        : 80 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 90
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 17  (1.13%)   [cap 1.00%]
  playout delay        : 90 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 93
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 12  (0.80%)   [cap 1.00%]
  playout delay        : 93 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 92
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 13  (0.87%)   [cap 1.00%]
  playout delay        : 92 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 92
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 12  (0.80%)   [cap 1.00%]
  playout delay        : 92 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 82
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 12  (0.80%)   [cap 1.00%]
  playout delay        : 82 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 81
endpoints done
relay done: {'up_bytes': 475600, 'down_bytes': 0, 'up_pkts': 2900, 'down_pkts': 0, 'dropped': 161, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 15  (1.00%)   [cap 1.00%]
  playout delay        : 81 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 1.98x   [cap 2.00x]   (up 475600B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ make
cc -O2 -Wall -o sender sender.c
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 80
endpoints done
relay done: {'up_bytes': 479700, 'down_bytes': 0, 'up_pkts': 2925, 'down_pkts': 0, 'dropped': 162, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 19  (1.27%)   [cap 1.00%]
  playout delay        : 80 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 2.00x   [cap 2.00x]   (up 479700B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/B.json --delay_ms 81
endpoints done
relay done: {'up_bytes': 479700, 'down_bytes': 0, 'up_pkts': 2925, 'down_pkts': 0, 'dropped': 162, 'duplicated': 30}
================ SCORE ================
  frames               : 1500
  deadline misses      : 15  (1.00%)   [cap 1.00%]
  playout delay        : 81 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 2.00x   [cap 2.00x]   (up 479700B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 42
endpoints done
relay done: {'up_bytes': 479700, 'down_bytes': 0, 'up_pkts': 2925, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 3  (0.20%)   [cap 1.00%]
  playout delay        : 42 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 2.00x   [cap 2.00x]   (up 479700B, feedback 0B)
  RESULT               : VALID
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 40
endpoints done
relay done: {'up_bytes': 479700, 'down_bytes': 0, 'up_pkts': 2925, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 17  (1.13%)   [cap 1.00%]
  playout delay        : 40 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 2.00x   [cap 2.00x]   (up 479700B, feedback 0B)
  RESULT               : INVALID
  (reduce misses under 1% and overhead under 2x, THEN minimize delay)
sayonmondal@sayon:~/Desktop/Projects/systems_handout$ python3 run.py --profile profiles/A.json --delay_ms 41
endpoints done
relay done: {'up_bytes': 479700, 'down_bytes': 0, 'up_pkts': 2925, 'down_pkts': 0, 'dropped': 72, 'duplicated': 19}
================ SCORE ================
  frames               : 1500
  deadline misses      : 5  (0.33%)   [cap 1.00%]
  playout delay        : 41 ms   <-- your score if valid; lower wins
  bandwidth overhead   : 2.00x   [cap 2.00x]   (up 479700B, feedback 0B)
  RESULT               : VALID
```