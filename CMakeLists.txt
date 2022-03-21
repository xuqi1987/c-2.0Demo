cmake_minimum_required(VERSION 3.19)
project(cplusplus_2_0Demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(cplusplus_2_0Demo main.cpp)

add_subdirectory(tests)