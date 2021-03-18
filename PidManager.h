#ifndef PIDMANAGER_H
#define PIDMANAGER_H
#define MIN_PID 300
#define MAX_PID 5000
int pid_map[MAX_PID - MIN_PID];

int allocate_map();

int allocate_pid();

void release_pid(int pid);

#endif