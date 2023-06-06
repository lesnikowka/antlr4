project(samples)

file(GLOB srcs "*.cpp*")
file(GLOB hdrs "*.h*")

add_executable(samples ${srcs} ${hdrs})

#target_link_libraries(samples PUBLIC ../3rdparty/antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime ../3rdparty/antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime-static)

target_link_libraries(samples PUBLIC ../../antlr4/antlr4-runtime ../../antlr4/antlr4-runtime-static)
