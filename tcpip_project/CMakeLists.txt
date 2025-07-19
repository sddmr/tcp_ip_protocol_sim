cmake_minimum_required(VERSION 3.10)
project(tcpip_project C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(tcpip_project
        src/main.c
        src/ip.c
        src/tcp.c
        src/checksum.c
)
