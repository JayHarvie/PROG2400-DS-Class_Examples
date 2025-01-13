cmake_minimum_required(VERSION 3.29)
project(commandline_arguments)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS "-static")

add_executable(commandline_arguments main.cpp
        ../string_stream/main.cpp
        ../string_stream/main.cpp)
