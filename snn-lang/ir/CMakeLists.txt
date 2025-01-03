cmake_minimum_required(VERSION 3.14)
project(MIR LANGUAGES CXX)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g -Werror")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(SRC_DIR src)
set(INCLUDE_DIR include)
set(BUILD_DIR ${CMAKE_BINARY_DIR})

set(OBJ_DIR ${BUILD_DIR}/obj)
set(BIN_DIR ${BUILD_DIR}/bin)
set(LIB_DIR ${BUILD_DIR}/lib)

include_directories(${INCLUDE_DIR})
set(STATIC_LIB ${LIB_DIR}/libmir.a)

file(GLOB_RECURSE SOURCES "src/**/*.cpp")

add_library(mir STATIC ${SOURCES})
set_target_properties(mir PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${LIB_DIR}
)

if(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
endif()



add_compile_options(-Werror -Wextra -Wpedantic -O0)
add_compile_options(-Wno-unused-parameter)
