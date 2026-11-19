cmake_minimum_required(VERSION 4.4)
project(data_structures_and_algorithms C)

set(CMAKE_C_STANDARD 11)

include_directories(algorithms)
include_directories(algorithms/sorting)
include_directories(algorithms/sorting/insertion-sort)

add_executable(data_structures_and_algorithms
        algorithms/sorting/insertion-sort/insertion_sort.c
        algorithms/sorting/insertion-sort/insertion_sort.h
        algorithms/sorting/insertion-sort/main.c)
