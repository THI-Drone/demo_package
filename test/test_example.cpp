#include <gtest/gtest.h>

#include "../src/main.cpp"

TEST(ReturnOneTest, ReturnsOne) { EXPECT_EQ(return_one(), 1); }