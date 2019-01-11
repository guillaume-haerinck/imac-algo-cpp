# Requirement
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_STANDARD 99)

# Project configuration
project(tp10c)
file(GLOB_RECURSE source_files ex1/*)

# Executable file
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})
add_executable(${PROJECT_NAME} ${source_files})
