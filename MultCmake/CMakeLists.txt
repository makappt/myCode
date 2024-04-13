cmake_minimum_required(VERSION 3.28)
project(MultCmake)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_subdirectory(src)
aux_source_directory(src SRC_ADR)

add_executable(MultCmake ${SRC_ADR})

target_link_libraries(MultCmake MultCmake_app MultCmake_library)

