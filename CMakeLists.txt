cmake_minimum_required(VERSION 3.15)
project(calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER "/usr/local/Cellar/gcc/9.2.0/bin/x86_64-apple-darwin17-g++-9")

#add_executable(main.cpp calculator.cpp calculator.h)

include_directories(.)
add_library(mylib calculator.cpp)

add_executable(cpp_demo main.cpp)
target_link_libraries(cpp_demo mylib)
