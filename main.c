#include "PidManager.h"
#include "ThreadManager.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    allocate_map() == 1 ? printf("Successfully allocated memory\n") : printf("The process is unsuccessful\n");
//    pid == -1 ? printf("The process is unsuccessful\n") : release_pid(pid);

    for(int i = 0 ; i < 100; i++)
    {
        int pid = allocate_pid();

        printf(pid);

        int randomNumber = (rand() % 2);

        ThreadManager treadmanager = createManager(i + 100, pid, randomNumber);

        run(treadmanager);
    }


    return 0;
}
