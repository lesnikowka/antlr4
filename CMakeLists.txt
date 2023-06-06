cmake_minimum_required(VERSION 3.24)
SET (CMAKE_CXX_STANDARD 17)

project(expression2 CXX)

include_directories(3rdparty/antlr4/runtime/Cpp/build/bin/bin/antlr4-runtime)
add_subdirectory(samples)

