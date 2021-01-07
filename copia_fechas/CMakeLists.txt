
project(fechas)
cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
include_directories(${PROJECT_SOURCE_DIR}/src)
add_executable(fechas
              src/Fecha.h
              src/Fecha.cc
              src/main_fechas.cc
              src/fecha_.h
              src/func_fechas.cc)