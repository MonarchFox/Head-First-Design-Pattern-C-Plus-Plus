cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_executable(untitled main.cpp
        Chapter_6_The_Command_Pattern/CommandInterface.h
        Chapter_6_The_Command_Pattern/Appliances.cpp
        Chapter_6_The_Command_Pattern/Appliances.h
        Chapter_6_The_Command_Pattern/SimpleRemoteControl.h
        Chapter_6_The_Command_Pattern/Item.h
)
