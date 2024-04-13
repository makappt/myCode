add_subdirectory(app)
add_subdirectory(library)

add_library(MultCmake_src STATIC main.cpp)

set(MultCmake_LIBS
        MultCmake_app
        MultCmake_library)

target_link_libraries(MultCmake_src ${MultCmake_LIBS})