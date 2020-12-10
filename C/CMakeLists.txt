add_executable(C main.cc)
target_link_libraries(C PRIVATE A B)

add_executable(CTest main_test.cc leap_test.cc index_test.cc)
target_link_libraries(CTest PRIVATE A B gtest)
add_test(CTest ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/CTest)