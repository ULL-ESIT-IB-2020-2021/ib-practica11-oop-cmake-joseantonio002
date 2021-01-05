project(racionales)
cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
include_directories(${PROJECT_SOURCE_DIR}/src)
add_executable(racionales
              src/racionales.h
              src/racionales.cc
              src/main_racionales.cc)