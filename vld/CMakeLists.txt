cmake_minimum_required(VERSION 3.28)
project(vld_project)

include_directories(D:/vld/include)
link_directories(D:/vld/lib/Win64)

set(CMAKE_CXX_STANDARD 17)

add_executable(vld_project main.cpp)
target_link_libraries(vld_project vld)