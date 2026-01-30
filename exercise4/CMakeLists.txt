cmake_minimum_required(VERSION 3.26)

project(EXERCISE4)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

set(tem1 hello)
set(tem2 ${tem1} " world") # 字符串拼接
message(==================)
message(STATUS ${tem1})
message(STATUS ${tem2})
# message(FATAL_ERROR fatalerror)
message(==================)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
message(${SRC_LIST})
list(APPEND SRC_LIST "123") # 字符串拼接
message(${SRC_LIST})
list(REMOVE_ITEM SRC_LIST "123" ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp) # 字符串删除
message(${SRC_LIST})
message(==================)

# add_library(calc STATIC ${SRC_LIST})
add_library(calc SHARED ${SRC_LIST})
