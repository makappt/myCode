add_library(MultCmake_app STATIC app.cpp
        app.h)
target_include_directories(MultCmake_app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})