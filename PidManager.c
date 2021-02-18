#include "PidManager.h"
#include <stdio.h>

int allocate_map()
{
    if(pid_map == NULL)  return -1;
    //If the array is NULL return -1
    for(int i = 0; i < MAX_PID - MIN_PID; i++)
    {
        pid_map[i] = 0;
    }
    /*
        The for loop initialize each of the index with 0
        Meaning it is each index is empty and ready for storing
     */

    return 1;
}

int allocate_pid()
{
    if(pid_map == NULL) return -1;
    //If the array is NULL return -1
    for(int i = 0; i < MAX_PID - MIN_PID; i++)
    {
        if(pid_map[i] == 0)
        {
            pid_map[i] = 1;
            return MIN_PID + i;
        }
    }
    /*
       The for loop will look for an empty index
       if it is empty, it will initialize it as 1
       then return the pid number
    */
}

void release_pid(int pid)
{
    if(pid_map == NULL)  //If the array is NULL, print the error message
    {
        printf("There is nothing to realease");
    }else if(pid < MIN_PID || pid > MAX_PID)  //If the pid is not in range, print the error message
    {
        printf("pid is not in range");
    }else{
        int newPID = pid - MIN_PID; //to find the index of the pid, do pid - MIN-PID

        if(pid_map[newPID] == 0)  //If the index of the pid is already empty, print error message
        {
            printf("There is nothing to release");
        }else{
            printf("released pid: %d \n", pid);  //If it is not empty, release the pid from the index

            pid_map[newPID] = 0;
        }
    }
}
}
