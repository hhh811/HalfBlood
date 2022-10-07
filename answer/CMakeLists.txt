cmake_minimum_required(VERSION 3.9)

add_library(libanswer STATIC answer.cpp)

message(STATUS "Current source dir: ${CMAKE_CURRENT_SOURCE_DIR}")

target_include_directories(libanswer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
