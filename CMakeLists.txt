cmake_minimum_required(VERSION 3.10)
project(FourBitAdder)

set(CMAKE_CXX_STANDARD 11)

# Add include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/logic_gates
    ${CMAKE_SOURCE_DIR}/circuits
)

add_executable(FourBitAdder 
    fourbitadder.cpp 
    logic_gates/ANDGate.cpp
    logic_gates/ORGate.cpp
    circuits/HalfAdder.cpp
    circuits/FullAdder.cpp
)
