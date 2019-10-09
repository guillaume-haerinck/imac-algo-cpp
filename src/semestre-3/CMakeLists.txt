# Requirement
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 14)

# ---------------------------------------- PROJECT FILES
project(imac-tp-algo-sem-2)
file(GLOB_RECURSE MY_SOURCES tp-2/ex1/*) # EDIT ME

include_directories(
    lib
)

# ------------------------------------------- BUILD PROJECT
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})
add_executable(${PROJECT_NAME} ${MY_SOURCES})
target_link_libraries(${PROJECT_NAME})

if (UNIX) # Use dynamic linking library
    target_link_libraries(${PROJECT_NAME} -ldl)
endif()
