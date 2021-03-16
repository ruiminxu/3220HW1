#include "PidManager.h"
#include "ThreadManager.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    allocate_map() == 1 ? printf("Successfully allocated memory\n") : printf("The process is unsuccessful\n");

    for(int i = 0 ; i <= 100; i++)
    {
        int pid = allocate_pid();

        int randomNumber = (rand() % 20);

        ThreadManager treadmanager = createManager(i + 100, pid, randomNumber);

        run(treadmanager);
    }


    return 0;
}
