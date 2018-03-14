#include "gtest\gtest.h"
#pragma once
int square(const int value)
{
	return value * value;
}
TEST(SquareTests, Square)
{
	EXPECT_EQ(0, square(0));
	EXPECT_EQ(4, square(-3));
}