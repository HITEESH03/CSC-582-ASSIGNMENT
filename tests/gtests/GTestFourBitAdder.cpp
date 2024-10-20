#include "FourBitAdder.h"
#include <gtest/gtest.h>

TEST(FourBitAdderTest, AddTwoNumbers) {
    FourBitAdder adder;

    // Add two numbers using the add method
    adder.add(3, 2);  // Add 3 and 2
    EXPECT_EQ(adder.getSum(), 5);  // Check if the sum is 5

    // Test overflow case
    adder.add(15, 1);  // Add 15 and 1, which overflows in 4-bit addition
    EXPECT_EQ(adder.getSum(), 0);  // Sum should be 0 due to overflow
    EXPECT_EQ(adder.getCarryOut(), 1);  // Carry out should be 1
}
