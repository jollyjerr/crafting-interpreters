cmake_minimum_required(VERSION 3.10)
project(linked-list)

set(CMAKE_C_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

include_directories(include)

add_executable(run src/main.c src/greet.c src/linked_list.c)
