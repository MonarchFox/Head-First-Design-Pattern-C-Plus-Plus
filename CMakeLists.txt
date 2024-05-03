cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_executable(untitled main.cpp
        Chapter_5_The_Singleton_Pattern/ChocolateBoiler_Implementation_1.h
        Chapter_5_The_Singleton_Pattern/ChocolateBoiler_Implementation_2.h
        Chapter_5_The_Singleton_Pattern/ChocolateBoiler_Implementation_3.h
        Chapter_5_The_Singleton_Pattern/ChocolateBoiler_Implementation_4.h
)
