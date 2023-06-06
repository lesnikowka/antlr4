project(samples)

file(GLOB srcs "*.cpp*")

add_executable(samples ${srcs})

target_include_directories(samples PUBLIC ../include)