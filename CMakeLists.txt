cmake_minimum_required(VERSION 4.2)
project(oop1)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop1 main.cpp
        Transport.h
        Transport.cpp
        Car.h
        Car.cpp
        Ship.h
        Airplane.h
        Airplane.cpp
        Ship.cpp)
