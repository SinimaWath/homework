cmake_minimum_required(VERSION 3.8)
project(lab10)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp sources/printdict.cpp headers/printdict.h headers/data.h headers/search.h sources/search.cpp headers/dictionary.h sources/dictionary.cpp headers/util.h sources/util.cpp)
add_executable(lab10 ${SOURCE_FILES})