project(include)

file(GLOB srcs "*.cpp*")
file(GLOB hdrs "*.h*")

add_executable(include ${srcs} ${hdrs})

include_directories(include ../3rdparty/antlr4/runtime/Cpp/build/bin/bin ../3rdparty/antlr4/runtime/Cpp/build/bin/include/antlr4-runtime)

target_link_libraries(include PUBLIC  ../3rdparty/antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime.lib ../3rdparty/antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime-static.lib)

#target_link_libraries(include PUBLIC ../../antlr4/antlr4-runtime ../../antlr4/antlr4-runtime-static)


add_custom_command(TARGET include
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy ../3rdparty/antlr4/runtime/Cpp/build/bin/bin/antlr4-runtime.dll ${CMAKE_BINARY_DIR}/bin/
)