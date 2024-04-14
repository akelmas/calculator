cmake_minimum_required(VERSION 3.15)
project(calculator LANGUAGES C)

find_package(cunit CONFIG)

add_executable(calculator math.h main.c)
add_executable(test_calculator math.h test_main.c)

target_link_libraries(test_calculator PRIVATE cunit::cunit)

