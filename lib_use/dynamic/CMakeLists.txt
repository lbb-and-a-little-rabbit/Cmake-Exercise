cmake_minimum_required(VERSION 3.26)
project(DYNAMIC_LIB_USE)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(calc SHARED IMPORTED)
set_target_properties(calc PROPERTIES IMPORTED_IMPLIB ${CMAKE_CURRENT_SOURCE_DIR}/lib/libcalc.dll.a IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/bin/libcalc.dll)

add_executable(dynamic main.cpp)

target_link_libraries(dynamic PUBLIC calc)
target_include_directories(dynamic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_custom_command(TARGET dynamic POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_CURRENT_SOURCE_DIR}/bin/libcalc.dll
        $<TARGET_FILE_DIR:dynamic>
) # 将*.dll放在.exe同一目录下