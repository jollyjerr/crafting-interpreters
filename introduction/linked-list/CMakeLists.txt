cmake_minimum_required(VERSION 3.10)
project(linked-list)

set(CMAKE_C_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(include)

add_executable(run src/main.c src/greet.c)
