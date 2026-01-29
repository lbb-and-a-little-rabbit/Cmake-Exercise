cmake_minimum_required(VERSION 3.26)

project(EXERCISE2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 强制使用c++ 20，不允许降级

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

#[[
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
add_executable(exercise2 ${SRC_LIST})
]]

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_executable(exercise2 ${SRC_LIST})
target_include_directories(exercise2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
