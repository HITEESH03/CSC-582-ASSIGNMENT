#include "gtest/gtest.h"
#include "HalfAdder.h"

TEST(HalfAdderTest, BasicOperation) {
    HalfAdder adder;
    adder.add(1, 0);
    EXPECT_EQ(adder.getSum(), 1);
    EXPECT_EQ(adder.getCarry(), 0);
}
