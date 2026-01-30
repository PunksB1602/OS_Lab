# OS Lab Disk Scheduling and Producer-Consumer

These programs were part of my Operating System lab in 5th semester (2024).


## Contents

- **disk_fcfs.cpp**  
  Implements the First-Come, First-Served (FCFS) disk scheduling algorithm. Prompts for disk size, number of requests, the requests themselves, and the initial head position. Outputs the total head movements required to service all requests in order.

- **disk_scan.cpp**  
  Implements the SCAN (Elevator) disk scheduling algorithm. Prompts for disk size, number of requests, the requests, and the initial head position. Outputs the order of servicing and the total and average head movements.

- **producer_consumer.c**  
  Simulates the Producer-Consumer problem using semaphores. Allows the user to produce or consume items in a buffer, showing the state of semaphores and buffer after each operation.
