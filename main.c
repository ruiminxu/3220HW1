#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "PidManager.h"

void *runThread(void *vargp)
{
    int pid = (int)vargp;

    printf("Thread %u allocated pid: %d\n", (int)pthread_self(), pid);

    int randomNumber = (rand() % 20);

    sleep(randomNumber);

    printf("Thread: %u released pid: %d\n", (int)pthread_self(), pid);

    release_pid(pid);

    return NULL;
}

int main() {

    allocate_map() == 1 ? printf("Successfully allocated memory\n") : printf("The process is unsuccessful\n");

    pthread_t threadID[100];

    for(int i = 0; i < 100; i++)
    {
        int pid = allocate_pid();
        pthread_create(&threadID[i], NULL, runThread, (void *)pid);
        printf("Thread: %d is created\n", threadID[i]);
    }

    for(int i = 0; i < 100; i++)
    {
        pthread_join(threadID[i], NULL);
    }

    pthread_exit (NULL);




    return 0;
}
