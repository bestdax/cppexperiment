cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(experiment VERSION 1.0)


file(GLOB CPPFILES 
"${CMAKE_SOURCE_DIR}/*.cpp")


add_executable(${PROJECT_NAME} ${CPPFILES})
