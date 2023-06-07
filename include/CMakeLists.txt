project(include)

SET(MYCOMPILE_FLAGS "-MT")



#target_compile_options(include ${MYCOMPILE_FLAGS})

#SET(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} ${MYCOMPILE_FLAGS }")
#SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${MYCOMPILE_FLAGS }")
#add_definitions(${MYCOMPILE_FLAGS})

file(GLOB srcs "*.cpp*")
file(GLOB hdrs "*.h*")

set_source_files_properties(${srcs} PROPERTIES COMPILE_FLAGS  "/MTd")

add_executable(include ${srcs} ${hdrs})

include_directories(include ${ANTLR_INCLUDE_DIR})
include_directories(include ${antlr4-runtime_DIR})

target_link_libraries(include "${ANTLR4_LIB_DIR}/antlr4-runtime.lib")



add_custom_command(TARGET include
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy ${antlr4-runtime_DIR}/bin/bin/antlr4-runtime.dll ${CMAKE_BINARY_DIR}/bin/
)