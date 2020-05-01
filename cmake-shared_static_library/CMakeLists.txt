cmake_minimum_required(VERSION 3.10)

project(Sample_Shared_lib)

#set(CMAKE_BUILD_TYPE Release)

include_directories(include)

#set(SOURCES src/sample.cpp) OR

file(GLOB SOURCES "src/*.cpp")

#SHARED OR STATIC OR MODULE
#shared library lib*.dll and lib*.dll.a
add_library(sample_shared SHARED ${SOURCES})
include (GenerateExportHeader)          
GENERATE_EXPORT_HEADER(sample_shared           # generates the export header shared_EXPORTS.h automatically
    BASE_NAME sample
    EXPORT_MACRO_NAME sample_shared_EXPORTS
    EXPORT_FILE_NAME sample_shared_EXPORTS.h
    STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)

#static library lib*.a
#add_library(sample_static STATIC ${SOURCES})

#To install library at /usr/lib path
#sudo make install
install(TARGETS sample_shared DESTINATION /usr/lib)
