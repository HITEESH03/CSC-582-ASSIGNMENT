#include "gtest/gtest.h"
#include "FullAdder.h"

TEST(FullAdderTest, CarryOperation) {
    FullAdder adder;
    adder.add(1, 1, 1);
    EXPECT_EQ(adder.getSum(), 1);
    EXPECT_EQ(adder.getCarryOut(), 1);
}
