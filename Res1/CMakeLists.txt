cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME Egor)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDART 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDART_REQUIRED TRUE)

add_executable("${PROJECT_NAME}" main.cpp)