cmake_minimum_required(VERSION 3.13)
project(ClangdAnnotator)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(inspections)

add_executable(CPP_15113 main.cpp test_highlighting.cpp)