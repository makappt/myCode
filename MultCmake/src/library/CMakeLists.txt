add_library(MultCmake_library STATIC library.cpp
        library.h)

target_include_directories(MultCmake_app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
