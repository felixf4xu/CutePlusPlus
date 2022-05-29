project(cutepp_test)


find_package(GTest REQUIRED)

add_executable(cutepp_test
    cutepp_test.cpp
    typename_test.cpp
    metaclass_test.cpp)

target_link_libraries(cutepp_test cutepp)    

target_link_libraries(cutepp_test GTest::gtest GTest::gmock)
