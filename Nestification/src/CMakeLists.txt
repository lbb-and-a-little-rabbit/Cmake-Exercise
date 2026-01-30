cmake_minimum_required(VERSION 3.26)
project(CALC_LIB)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

set(LIBRARY_OUTPUT_PATH ${LIB_PATH})
add_library(calc STATIC ${SRC_LIST})
target_include_directories(calc PUBLIC ${INCLUDE_PATH})