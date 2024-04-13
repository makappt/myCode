cmake_minimum_required(VERSION 3.28)

set(MAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
    CACHE STRING "vcpkg toolchain file")

project(spdlog)

set(CMAKE_CXX_STANDARD 17)

find_package(spdlog CONFIG REQUIRED)

add_executable(spdlog main.cpp)

target_link_libraries(spdlog PRIVATE spdlog::spdlog)
