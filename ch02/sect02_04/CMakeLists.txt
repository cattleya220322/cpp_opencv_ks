cmake_minimum_required(VERSION 3.25)
project (ch02_sect02_04)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(main code230123_00.cpp)
target_link_libraries(main ${OpenCV_LIBS})