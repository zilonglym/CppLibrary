cmake_minimum_required(VERSION 3.24)
project(CppLibrary)
#include_directories("$ENV{JAVA_HOME}/include/darwin")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I $ENV{JAVA_HOME}/include -I $ENV{JAVA_HOME}/include/darwin")

add_library(CppLibrary SHARED library.cpp)
