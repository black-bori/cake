add_executable(test_cake
    test_eltwise.cpp
)

target_link_libraries(test_cake
    PRIVATE
        cake
        gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_cake)
