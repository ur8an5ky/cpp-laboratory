cmake_minimum_required(VERSION 3.10)
project(cpp-laboratory)

### setting Clang as compiler
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

### adding subdirectories
add_subdirectory(design-patterns)
# add_subdirectory(algorithms)
