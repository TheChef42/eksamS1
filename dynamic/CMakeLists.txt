cmake_minimum_required(VERSION 3.16)
project(dynamic C)

set(CMAKE_C_STANDARD 99)

add_executable(dynamic main.c functions.c functions.h)
