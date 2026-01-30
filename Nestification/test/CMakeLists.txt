cmake_minimum_required(VERSION 3.26)
project(nestification_test)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${EXE_PATH})

add_executable(app main.cpp)
target_include_directories(app PUBLIC ${INCLUDE_PATH})
target_link_libraries(app PUBLIC calc)