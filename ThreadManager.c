#include "ThreadManager.h"
#include "PidManager.h"
#include <stdio.h>
#include <windows.h>

ThreadManager createManager(int ThreadNum, int pidNum, int waitTime)
{
    ThreadManager manager;
    manager.ThreadID = ThreadNum;
    manager.pidNum = pidNum;
    manager.waitTime = waitTime;

    return manager;
}

void run(ThreadManager manager)
{
    printf(manager.pidNum);
    Sleep(manager.waitTime);
    release_pid(manager.pidNum);
}