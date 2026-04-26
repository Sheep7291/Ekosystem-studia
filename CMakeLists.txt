cmake_minimum_required(VERSION 4.2)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        zlab03.cpp
        zlab03.h
        organizm.cpp
        organizm.h
        ustawienia.h
        GeneratorLosowy.cpp
        GeneratorLosowy.h)
