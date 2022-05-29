cmake_minimum_required(VERSION 3.0.0)
project(cutepp VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(cutepp 
    metaclass.h
    typename.h
    cutepp.h
    cutepp.cpp)

target_include_directories(cutepp PUBLIC .)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(test)

## test application
add_executable(main
    main.cpp)

target_link_libraries(main cutepp)
