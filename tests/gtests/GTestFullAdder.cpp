#include "gtest/gtest.h"
#include "FullAdder.h"

TEST(FullAdderTest, AddTwoBits) {
    FullAdder adder;
    adder.add(1, 1, 0);
    EXPECT_EQ(adder.getSum(), 0);
    EXPECT_EQ(adder.getCarryOut(), 1);

    adder.add(1, 0, 1);
    EXPECT_EQ(adder.getSum(), 0);
    EXPECT_EQ(adder.getCarryOut(), 1);
}
