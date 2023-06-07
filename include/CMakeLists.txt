project(include)

file(GLOB srcs "*.cpp*")
file(GLOB hdrs "*.h*")

add_executable(include ${srcs} ${hdrs})

include_directories(include ${ANTLR_INCLUDE_DIR})
include_directories(include ${antlr4-runtime_DIR})

target_link_libraries(include "${ANTLR4_LIB_DIR}/antlr4-runtime.lib")

add_custom_command(TARGET include
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy ${antlr4-runtime_DIR}/bin/bin/antlr4-runtime.dll ${CMAKE_BINARY_DIR}/bin/
)