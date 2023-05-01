#include "gtest/gtest.h"

int testCode(int a, int b)
{
    return a + b;
}

TEST(PassTestCase1, testTargetProjectTest1) {
  EXPECT_EQ(2, testCode(1, 1));
  EXPECT_EQ(21, testCode(10, 11));
}