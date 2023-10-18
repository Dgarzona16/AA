cmake_minimum_required(VERSION 3.26)
project(Objects)

set(CMAKE_CXX_STANDARD 23)

add_library(Objects SHARED Objects.cpp
        car/car.hpp
        car/car.cpp
        plane/plane.hpp
        plane/plane.cpp)
