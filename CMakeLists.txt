cmake_minimum_required(VERSION 3.17)
project(3220HW1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(3220HW1
        main.c
        PidManager.c
        PidManager.h)
