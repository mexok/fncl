cmake_minimum_required(VERSION 3.22)
project(c99 C)

set(CMAKE_C_STANDARD 99)

add_library(fncl-embeddable src/fncl-embeddable/fncl_object.c src/fncl-embeddable/fncl_runtime.c)
target_include_directories(fncl-embeddable PUBLIC src/fncl-embeddable src/includes)

add_executable(fncl-tests src/fncl-tests/main.c)
target_link_libraries(fncl-tests fncl-embeddable)
