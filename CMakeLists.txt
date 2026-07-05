# build instructions
# how to stitch files together into a runnable app

cmake_minimum_required(VERSION 3.15)
project(DottyMath VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# create math library
add_library(dotty_lib src/Vector3.cpp)
target_include_directories(dotty_lib PUBLIC include)

# create executable application
add_executable(dotty_app apps/main.cpp)
target_link_libraries(dotty_app PRIVATE dotty_lib)