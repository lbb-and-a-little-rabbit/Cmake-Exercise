cmake_minimum_required(VERSION 3.26)
project(nestification_cmake)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(EXE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_subdirectory(src)
add_subdirectory(test)