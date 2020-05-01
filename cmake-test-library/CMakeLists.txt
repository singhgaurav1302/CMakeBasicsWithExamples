cmake_minimum_required(VERSION 3.10)

project(Test_Library)

set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

include_directories(C:\\Users\\sadhna\\MyWorkspace\\cpp-projects\\cmake-tutorial\\cmake-shared_library\\include 
                    C:\\Users\\sadhna\\MyWorkspace\\cpp-projects\\cmake-tutorial\\cmake-shared_library\\build)

set(PROJECT_LINK_LIBS sample_static)

#Need to work on shared library
#set(PROJECT_LINK_LIBS sample_shared)
link_directories(C:\\Users\\sadhna\\MyWorkspace\\cpp-projects\\cmake-tutorial\\cmake-shared_library\\build)

add_executable(testlib main.cpp)
target_link_libraries(testlib ${PROJECT_LINK_LIBS})