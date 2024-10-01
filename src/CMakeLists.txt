cmake_minimum_required(VERSION 3.11)

project(src)		

set(SRC_EXE Main.cpp)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(triangle ${SRC_EXE})
target_include_directories(triangle PUBLIC ${INCLUDE_DIR})
