cmake_minimum_required(VERSION 3.16)
project(prime C)

set(CMAKE_C_STANDARD 99)

add_executable(prime main.c functions.c functions.h)
