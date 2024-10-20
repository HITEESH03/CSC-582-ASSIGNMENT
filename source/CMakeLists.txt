cmake_minimum_required(VERSION 3.10)
project(FourBitAdder)

# Include directories for header files
include_directories(${CMAKE_SOURCE_DIR}/FourBitAdder)

# Add source files
set(SRC
    ${CMAKE_SOURCE_DIR}/FourBitAdder/intern/FourBitAdder.cpp
    ${CMAKE_SOURCE_DIR}/FourBitAdder/intern/FullAdder.cpp
    ${CMAKE_SOURCE_DIR}/FourBitAdder/intern/HalfAdder.cpp
)

# Create the library for the project
add_library(proj1_FourBitAdder ${SRC})

# Google Test setup
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test files
set(TEST_SRC
    ${CMAKE_SOURCE_DIR}/../tests/gtests/GTestFourBitAdder.cpp
    ${CMAKE_SOURCE_DIR}/../tests/gtests/GTestFullAdder.cpp
    ${CMAKE_SOURCE_DIR}/../tests/gtests/GTestHalfAdder.cpp
    ${CMAKE_SOURCE_DIR}/../tests/gtests/GTestLogicGates.cpp
)

# Add test executable
add_executable(FourBitAdderTests_gtests ${TEST_SRC})
target_link_libraries(FourBitAdderTests_gtests proj1_FourBitAdder GTest::GTest GTest::Main pthread)
