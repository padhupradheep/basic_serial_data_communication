cmake_minimum_required(VERSION 2.8)

project(cpp_practice)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)


include_directories (
    include
)

add_executable( cpp_practice
		src/main.cpp )

