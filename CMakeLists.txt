cmake_minimum_required(VERSION 3.16)
project(yaml)

set(CMAKE_CXX_STANDARD 14)

add_executable(yaml main.cpp)

find_package(yaml-cpp REQUIRED)

target_link_libraries (yaml yaml-cpp)
