#include "gtest/gtest.h"
#include "LogicGates.h"

TEST(ANDGateTest, BasicOperation) {
    EXPECT_EQ(ANDGate(1, 1), 1);
    EXPECT_EQ(ANDGate(0, 1), 0);
}
