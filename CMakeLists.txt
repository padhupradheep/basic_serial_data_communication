cmake_minimum_required(VERSION 2.8)

project(cpp_practice)

set(CMAKE_CXX_FLAGS "-std=c++0x")

set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)


include_directories (
    include
)

add_executable( cpp_practice
		src/main.cpp )

