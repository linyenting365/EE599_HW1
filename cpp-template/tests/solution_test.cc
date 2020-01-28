#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintMyname();
  std::string expected = "My bname is Yen-Ting Lin";
  EXPECT_EQ(expected, actual);
}