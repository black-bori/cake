add_library(cake SHARED
    src/cake.cpp
)

target_include_directories(cake
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
