cmake_minimum_required(VERSION 3.0)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

add_executable(sd main.cpp 
                src/Utils.cpp
                src/Application.cpp
                src/ParsingCommand.cpp
            )