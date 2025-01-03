# Root-level CMakeLists.txt for snn-lang

# Set the minimum CMake version required
cmake_minimum_required(VERSION 3.14)

# Define the project name
project(snn-lang)

# Set the C++ standard for the project
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

# Define directories
set(SRC_DIR ${CMAKE_BINARY_DIR}/src)
set(LIB_DIR ${CMAKE_BINARY_DIR}/lib)
set(BIN_DIR ${CMAKE_BINARY_DIR}/bin)
set(INCLUDE_DIR ${CMAKE_BINARY_DIR}/include)

add_subdirectory(ir)
