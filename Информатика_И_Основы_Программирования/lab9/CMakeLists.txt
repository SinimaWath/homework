cmake_minimum_required(VERSION 3.8)
project(lab9)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp print.cpp print.h)
add_executable(lab9 ${SOURCE_FILES})