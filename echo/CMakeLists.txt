cmake_minimum_required(VERSION 3.29)
project(echo)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS "-static")

add_executable(echo main.cpp
        ../commandline_arguments/main.cpp)
