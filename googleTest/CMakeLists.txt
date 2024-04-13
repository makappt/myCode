cmake_minimum_required(VERSION 3.28)
# vcpkg经典模式下建议手动添加这个,不然可能会报错找不到路径，别折腾了
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
        CACHE STRING "Vcpkg toolchain file")

project(test)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
aux_source_directory(src DIR_SRCS)

find_package(GTest CONFIG REQUIRED)

add_executable(test ${DIR_SRCS})

target_link_libraries(test PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)
