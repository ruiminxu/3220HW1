#ifndef UNTITLED_THREADMANAGER_H
#define UNTITLED_THREADMANAGER_H


typedef struct {

    int ThreadID;

    int pidNum;

    int waitTime;

} ThreadManager;

ThreadManager createManager(int, int, int);

void run(ThreadManager);

#endif
