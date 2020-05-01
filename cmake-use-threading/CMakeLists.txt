cmake_minimum_required(VERSION 3.10)

project(Use_Threading)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")
add_executable(testThreading ${SOURCES})
target_link_libraries(testThreading pthread)