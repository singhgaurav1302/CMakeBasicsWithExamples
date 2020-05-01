cmake_minimum_required(VERSION 3.10)

project(Subdirectories)

include_directories(include)

#set(SOURCES src/sample.cpp src/main.cpp)

file(GLOB SOURCES "src/*.cpp")

add_executable(Subdirectories ${SOURCES})