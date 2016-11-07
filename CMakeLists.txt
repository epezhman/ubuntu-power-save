cmake_minimum_required(VERSION 3.3)
project(ubunutu_power_save)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("${PROJECT_SOURCE_DIR}")

find_package(NAN REQUIRED)

include_directories(NAN_INCLUDE_DIR)

set(SOURCE_FILES
        main.cpp ubuntu_power_save.cc test.h)

add_executable(ubunutu_power_save ${SOURCE_FILES})