#include "PidManager.h"
#include <stdio.h>

int main() {
    allocate_map() == 1 ? printf("Successfully allocated memory\n") : printf("The process is unsuccessful\n");
    int pid = allocate_pid();
    pid == -1 ? printf("The process is unsuccessful\n") : release_pid(pid);
    return 0;
}
