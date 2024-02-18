cmake_minimum_required(VERSION 3.28)
project(FixArcPDF)

set(CMAKE_CXX_STANDARD 17)

add_executable(FixArcPDF main.cpp
        resources.h
        resources.rc)

target_link_options(FixArcPDF PRIVATE -static)
