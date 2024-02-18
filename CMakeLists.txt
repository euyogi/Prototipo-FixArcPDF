cmake_minimum_required(VERSION 3.28)
project(Sandbox)

set(CMAKE_CXX_STANDARD 17)

add_executable(Sandbox main.cpp)

target_link_options(Sandbox PRIVATE -static)