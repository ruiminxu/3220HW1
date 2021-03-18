// #include "PidManager.h"
// #include "ThreadManager.h"
// #include <stdio.h>
// #include <stdlib.h>


// int main() {
//     allocate_map() == 1 ? printf("Successfully allocated memory\n") : printf("The process is unsuccessful\n");
// //    pid == -1 ? printf("The process is unsuccessful\n") : release_pid(pid);

//     for(int i = 0 ; i < 5; i++)
//     {
//         int pid = allocate_pid();

//         printf(pid);

//         int randomNumber = (rand() % 2);

//         ThreadManager treadmanager = createManager(i + 100, pid, randomNumber);

//         run(treadmanager);
//     }


//     return 0;
// }

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h>
#include "PidManager.h"


// The function to be executed by all threads 
void *runThread(void *vargp) 
{ 
	// Store the value argument passed to this thread 
	int *myid = (int *)vargp; 
    
    int someID = allocate_pid();
    int randomNumber = (rand() % 20); 
    printf("Thread ID: %d || PID: %d || TIME: %d \n", *myid, someID, randomNumber);

    
    sleep(randomNumber);
    
    release_pid(someID);


	// Print the argument, static and global variables 
	// printf("Thread ID: %d, Static: %d, Global: %d\n", *myid, ++s, ++g);
    
} 

int main() 
{ 

    allocate_map() == 1 ? printf("Successfully allocated memory\n") : printf("The process is unsuccessful\n");

	int i; 
	pthread_t tid; 

	// Let us create three threads 
	for (i = 0; i <= 100; i++) {
        pthread_create(&tid, NULL, runThread, (void *)&tid);
    }
    pthread_exit(NULL);
	return 0; 
} 

