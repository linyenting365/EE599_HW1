#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMedianTest, HandlesConsecutiveNumbers) {
  Solution solution;
  std::vector<double> inputs = {1, 2, 3, 4};
  EXPECT_EQ(solution.FindMedian(inputs), 2.5);
}

TEST(FindMedianTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<double> inputs = {1, 2, 3, 4, 8,10,7};
  EXPECT_EQ(solution.FindMedian(inputs),4);
}

TEST(FindMaxTest, HandlesSizeOne) {
  Solution solution;
  std::vector<double> inputs = {2};
  EXPECT_EQ(solution.FindMedian(inputs), 2);
}

TEST(FindMedianTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<double> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);

}
