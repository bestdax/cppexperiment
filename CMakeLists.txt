cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(experiment VERSION 1.0)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)

