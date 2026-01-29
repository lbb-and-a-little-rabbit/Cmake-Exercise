cmake_minimum_required(VERSION 3.26)

project(EXERCISE1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 强制使用c++ 20，不允许降级

#[[

set(SRC_LIST main.cpp add.cpp divide.cpp mult.cpp sub.cpp) # 设置普通变量
# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable(exercise1 ${SRC_LIST})

]]

#[[
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
add_executable(exercise1 ${SRC_LIST})
]]

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_executable(exercise1 ${SRC_LIST})
