cmake_minimum_required(VERSION 3.17.0 FATAL_ERROR)

project(recognizer)
add_library(recognizer  src/intent.cpp )
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_compile_features(recognizer PUBLIC cxx_std_20)