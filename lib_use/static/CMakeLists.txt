cmake_minimum_required(VERSION 3.26)

project(STATIC_LIB_USE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(calc STATIC IMPORTED)

set_target_properties(calc PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/lib/libcalc.a)

add_executable(static main.cpp)

target_link_libraries(static PUBLIC calc)

target_include_directories(static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)