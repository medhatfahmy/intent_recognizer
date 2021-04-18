cmake_minimum_required(VERSION 3.17.0 FATAL_ERROR)
set(recognizer_path ${CMAKE_CURRENT_LIST_DIR}/hello)

project(main)

add_executable(main main.cpp)
add_subdirectory(recognizer)
include_directories(${recognizer_path}/include)
target_link_libraries(main PRIVATE recognizer)
target_compile_features(main PUBLIC cxx_std_17)




