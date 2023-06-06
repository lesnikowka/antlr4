cmake_minimum_required(VERSION 3.24)
SET (CMAKE_CXX_STANDARD 17)

project(expression2 CXX)

include_directories( 
./antlr4 3rdparty/antlr4/runtime/Cpp/build/bin/lib 3rdparty/antlr4/runtime/Cpp/build/bin/bin/ 3rdparty/antlr4/runtime/Cpp/build/bin/include/
)

add_subdirectory(include)
add_subdirectory(samples)
