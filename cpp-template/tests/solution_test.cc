#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintMyname();
  std::string expected = "My name is Yen-Ting Lin";
  EXPECT_EQ(expected, actual);
}
TEST(Factorial, ReturnFactorial) {
  Solution solution;
  int input=10;
  int actual = solution.Factorial(input);
  int expected =3628800;
  EXPECT_EQ(expected, actual);
}
TEST(Factorial, Factorial_ReturnFactorial) {
  Solution solution;
  int input=10;
  int actual = solution.Factorial_recursive(input);
  int expected = 3628800;
  EXPECT_EQ(expected, actual);
}