cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_executable(untitled main.cpp
        Chapter_6_The_Command_Pattern/CommandInterface.h
        Chapter_6_The_Command_Pattern/ApplianceItems.cpp
        Chapter_6_The_Command_Pattern/AppliancesCommands.h
        Chapter_6_The_Command_Pattern/SimpleRemoteControl.h
        Chapter_6_The_Command_Pattern/ApplianceItems.h
        Chapter_6_The_Command_Pattern/RemoteControl.h
        Chapter_7_The_Adapter_And_Facade_Pattern/Interfaces.h
        Chapter_7_The_Adapter_And_Facade_Pattern/Users.h
)
