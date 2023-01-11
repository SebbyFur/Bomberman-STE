cmake_minimum_required(VERSION 3.0)

project (Bomberman CXX)

#Source folder
set(SRC src)

#Include folder
set(INC include)

#CXX sources
file(GLOB src_bomberman ${SRC}/*/*.cpp)

include_directories(${INC})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/maps DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(bomberman ${src_bomberman})
