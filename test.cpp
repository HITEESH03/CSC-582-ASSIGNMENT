#include <gtest/gtest.h>
#include "ANDGate.h"
#include "HalfAdder.h"

// Test ANDGate
TEST(LogicGatesTest, ANDGateTest) {
    ANDGate andGate(true, true);
    EXPECT_EQ(andGate.compute(), true);

    ANDGate andGateFalse(true, false);
    EXPECT_EQ(andGateFalse.compute(), false);
}

// Test HalfAdder
TEST(CircuitsTest, HalfAdderTest) {
    HalfAdder ha(true, false);
    EXPECT_EQ(ha.getSum(), true);
    EXPECT_EQ(ha.getCarry(), false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
