cmake_minimum_required(VERSION 2.8.12.2)
project(URI_BEGINNER)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp )
add_executable(URI_BEGINNER ${SOURCE_FILES})