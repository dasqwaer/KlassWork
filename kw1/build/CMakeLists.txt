CMAKE_MINIMUM_REQUIRED(VERSION 2.0)
PROJECT(Program)
add_executable(program src/program.cpp)
target_include_directories(program PRIVATE include)
