cmake_minimum_required(VERSION 3.17)
project(RayTestThree C)

set(CMAKE_C_STANDARD 99)

add_executable(RayTestThree main.c PidManager.c PidManager.h)