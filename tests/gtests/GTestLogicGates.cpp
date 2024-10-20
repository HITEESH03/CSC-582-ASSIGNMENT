#include "gtest/gtest.h"
#include "LogicGates.h"

TEST(LogicGateTest, ANDGateTest) {
    EXPECT_EQ(ANDGate(1, 1), 1);
    EXPECT_EQ(ANDGate(1, 0), 0);
}

TEST(LogicGateTest, ORGateTest) {
    EXPECT_EQ(ORGate(1, 0), 1);
    EXPECT_EQ(ORGate(0, 0), 0);
}
