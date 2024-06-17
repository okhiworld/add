cmake_minimum_required(VERSION 3.28.3)
project(ColorChannelSeparator)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(ColorChannelSeparator main.cpp)

target_link_libraries(ColorChannelSeparator ${OpenCV_LIBS})
