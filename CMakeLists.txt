cmake_minimum_required(VERSION 3.10)
project(ACCOUNTANT CXX)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB SRC_FILES "src/*.cpp")

set(MAIN_FILE main.cpp)

set(ALL_FILES ${MAIN_FILE} ${SRC_FILES})

add_executable(acc ${ALL_FILES})
