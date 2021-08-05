cmake_minimum_required(VERSION 3.10)

project(bugyellow)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(tvision)

add_executable(bugyellow main.cpp)

target_link_libraries(bugyellow tvision)