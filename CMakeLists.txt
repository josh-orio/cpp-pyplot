cmake_minimum_required(VERSION 3.28.0)
project(plotpp LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS_RELEASE "-g -O3")

add_executable(plot main.cpp)

find_package(Python3 COMPONENTS Development REQUIRED)
message("${Python3_INCLUDE_DIRS}")
message("${Python3_LIBRARIES}")
include_directories(${Python3_INCLUDE_DIRS})
target_link_libraries(plot ${Python3_LIBRARIES})
