cmake_minimum_required(VERSION 3.15)
project(calculator LANGUAGES C)

add_executable(calculator math.h main.c)
add_executable(test_calculator math.h test_main.c)

