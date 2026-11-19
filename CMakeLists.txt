cmake_minimum_required(VERSION 3.20)
project(data_structures_and_algorithms C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Wpedantic -Werror -fsanitize=address,undefined)
add_link_options(-fsanitize=address,undefined)
include_directories(common)

enable_testing()

# dsa_module(<pasta> <nome> [dependências...])
function(dsa_module dir name)
    add_library(${name} ${dir}/${name}.c)
    target_include_directories(${name} PUBLIC ${dir})
    target_link_libraries(${name} PUBLIC ${ARGN})

    if(EXISTS ${CMAKE_SOURCE_DIR}/${dir}/test_${name}.c)
        add_executable(test_${name} ${dir}/test_${name}.c)
        target_link_libraries(test_${name} PRIVATE ${name})
        add_test(NAME ${name} COMMAND test_${name})
    endif()

    if(EXISTS ${CMAKE_SOURCE_DIR}/${dir}/main.c)
        add_executable(demo_${name} ${dir}/main.c)
        target_link_libraries(demo_${name} PRIVATE ${name})
    endif()
endfunction()

# Algoritmos
dsa_module(algorithms/sorting/insertion-sort insertion_sort)