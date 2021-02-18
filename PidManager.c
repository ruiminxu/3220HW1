#include "PidManager.h"
#include <stdio.h>

int allocate_map()
{
    if(pid_map == NULL)  return -1;

    for(int i = 0; i < MAX_PID - MIN_PID; i++)
    {
        pid_map[i] = 0;
    }

    return 1;
}

int allocate_pid()
{
    if(pid_map == NULL) return -1;

    for(int i = 0; i < MAX_PID - MIN_PID; i++)
    {
        if(pid_map[i] == 0)
        {
            pid_map[i] = 1;
            return MIN_PID + i;
        }
    }
}

void release_pid(int pid)
{
    if(pid_map == NULL)
    {
        printf("There is nothing to realease");
    }else if(pid < MIN_PID || pid > MAX_PID)
    {
        printf("pid is not in range");
    }else{
        int newPID = pid - MIN_PID;

        if(pid_map[newPID] == 0)
        {
            printf("There is nothing to release");
        }else{
            printf("released pid: %d \n", pid);
            pid_map[newPID] = 0;
        }
    }
}