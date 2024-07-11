cmake_minimum_required(VERSION 3.5)
project(Cerver LANGUAGES C)

add_executable(cerver src/cerver.c)

target_link_libraries(cerver socket)