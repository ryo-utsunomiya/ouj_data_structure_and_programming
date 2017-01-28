cmake_minimum_required(VERSION 3.6)
project(ouj_data_structure_and_programming)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c linkedlist-stack.c binary-tree.c hash-table-chaining.c hash-table-chaining.h fibonacci.c fibonacci.h)
add_executable(ouj_data_structure_and_programming ${SOURCE_FILES})