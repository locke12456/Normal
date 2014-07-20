#include <limits.h>
#include "Algorithm\Pascal.h"
#include "gtest/gtest.h"
TEST(PascalTest, AssertEQs) {
	// This test is named "Negative", and belongs to the "FactorialTest"
	// test case.

	EXPECT_EQ(3, Pascal::Combinations(3,2));
	EXPECT_EQ(6, Pascal::Combinations(4, 2));
	EXPECT_EQ(924, Pascal::Combinations(12, 6));
}