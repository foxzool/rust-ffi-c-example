cmake_minimum_required(VERSION 3.22)
set(CMAKE_HOST_SYSTEM_PROCESSOR X86_64)
set(CMAKE_C_COMPILER clang)
set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE Release)

project("ffi-demo")
set(LIBRARY_NAME "my_lib")

set(LIBRARY_HEAD_FILE my_lib/source/wrapper.h)
set(LIBRARY_SOURCE_FILE my_lib/source/wrapper.c)

add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SOURCE_FILE})
add_executable(${PROJECT_NAME} my_lib/demo.c ${LIBRARY_SOURCE_FILE})

