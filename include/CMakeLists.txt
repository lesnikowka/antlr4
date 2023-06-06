project(include)

file(GLOB srcs "*.cpp*")
file(GLOB hdrs "*.h*")

add_executable(include ${srcs} ${hdrs})

#target_link_libraries(include PUBLIC ../3rdparty/antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime ../3rdparty/antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime-static)

target_link_libraries(include PUBLIC ../../antlr4/antlr4-runtime ../../antlr4/antlr4-runtime-static)
