#include <gtest/gtest.h>
#include <myint.h>

TEST(MyIntTest, isOdd)
{
  MyInt mi1 = MyInt(10);
  EXPECT_FALSE(mi1.isOdd());

  MyInt mi2 = MyInt(13);
  EXPECT_TRUE(mi2.isOdd());
}

TEST(MyIntTest, isEven)
{
  MyInt mi1 = MyInt(10);
  EXPECT_TRUE(mi1.isEven());

  MyInt mi2 = MyInt(13);
  EXPECT_FALSE(mi2.isEven());
}

