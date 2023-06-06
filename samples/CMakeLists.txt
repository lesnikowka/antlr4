project(samples)

file(GLOB srcs "*.cpp*")

add_executable(samples ${srcs})

include_directories(include ../3rdparty/antlr4/runtime/Cpp/build/bin/bin ../3rdparty/antlr4/runtime/Cpp/build/bin/include/antlr4-runtime)


target_include_directories(samples PUBLIC ../include)