cmake_minimum_required(VERSION 3.0)

project (Bomberman CXX)

#Flags
SET(GCC_COVERAGE_COMPILE_FLAGS "-fsanitize=address")
SET(GCC_COVERAGE_LINK_FLAGS    "-fsanitize=address") 
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")


#Source folder
set(SRC src)

#Include folder
set(INC include)

#CXX sources
file(GLOB src_bomberman ${SRC}/*/*.cpp)

include_directories(${INC})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/maps DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(bomberman ${src_bomberman})
