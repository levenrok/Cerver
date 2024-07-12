cmake_minimum_required(VERSION 3.5)
project(Cerver LANGUAGES C)

add_library(ErrSock src/Err_Sock.c)

target_include_directories(ErrSock PUBLIC ${CMAKE_SOURCE_DIR}/src/include)

add_executable(cerver
    src/cerver.c
)

target_link_libraries(cerver PRIVATE ErrSock PUBLIC socket)