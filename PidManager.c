#include "PidManager.h"
#include <stdio.h>

//function that allocates the map
//by using a for loop that initializes the pids at i to 0
int allocate_map()
{
    for(int i = 0; i < MAX_PID - MIN_PID; i++)
    {
        pid_map[i] = 0;
    }

    return 1;
}

//allocates pid by using a for loop and verifies if the pid is equal to 0(not being used)
// if it is, then that pid gets the value of one, which means it was allocated
int allocate_pid()
{
    for(int i = 0; i < MAX_PID - MIN_PID; i++)
    {
        if(pid_map[i] == 0)
        {
            pid_map[i] = 1;
            // printf("pid allocated: %d \n", MIN_PID + i);
            return MIN_PID + i;
        }
    }
}


//the release pid function creates a new pid variable
//which then gets passed to the pid map, to verify if the pid is being used or not
//if the pid isn't being used(equal to 0), then it'll print a message, if its being used then 
//the pid will get initialized to 0
void release_pid(int pid)
{
    int newPID = pid - MIN_PID;

    if(pid_map[newPID] == 0)
    {
        printf("There is nothing to release");
    }else{
        printf("released pid: %d \n", pid);
        pid_map[newPID] = 0;
        }
    
}