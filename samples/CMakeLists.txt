project(samples)

file(GLOB srcs "*.cpp*")
file(GLOB hdrs "*.h*")

add_executable(samples ${srcs} ${hdrs})

target_link_libraries(samples PUBLIC ../../antlr4/antlr4-runtime ../../antlr4/antlr4-runtime-static)
