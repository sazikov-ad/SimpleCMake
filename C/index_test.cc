#include "A/index.h"
#include "gtest/gtest.h"

TEST(IndexTest, TestAdd) {
  ASSERT_EQ(integer_add(1, 2), 1 + 2);
}

TEST(IndexTest, TestSub) {
  ASSERT_EQ(integer_sub(1, 2), 1 - 2);
}