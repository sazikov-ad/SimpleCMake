#include "B/lib.h"
#include "gtest/gtest.h"

TEST(LeapTest, TestLeap) {
  ASSERT_EQ(is_leap(-1), -1);
  ASSERT_EQ(is_leap(2000), 1);
  ASSERT_EQ(is_leap(2001), 0);
}