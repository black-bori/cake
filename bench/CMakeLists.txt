add_executable(bench_cake
    src/main.cpp
)

target_link_libraries(bench_cake
    PRIVATE
        cake
)
