// Write 3 functions:
// 1. Find the greatest common divisor of two nonnegative integer values and
// return the reuslt(2 int as parameters)
// 2. Calculate the absolute value of a number (1 float as parameter)
// 3. Compute the square root of a number:
// If negative argument is passed, then a message should be displayed and -1. 0
// should be returned. Should use the absolute value function from #2

#include <stdio.h>

int gcd(int a, int b);
float AbsoluteValue(float a);
float SquareRoot(float a);

int main(void) {
  int result;

  result = gcd(10, 5);
  printf("Result: %d\n", result);
  printf("%.1f\n", AbsoluteValue(-10));
  printf("%.1f\n", SquareRoot(25));
}

// 1. Find the greatest common divisor of two nonnegative integer values and
// return the reuslt(2 int as parameters)
int gcd(int a, int b) {

  int gcd;
  for (int i = 1; i <= a && i <= b; i++) {

    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }
  return gcd;
}

// 2. Calculate the absolute value of a number (1 float as parameter)
float AbsoluteValue(float a) {

  if (a < 0) {
    a = -a;
  }
  return a;
}

// 3. Compute the square root of a number:
// If negative argument is passed, then a message should be displayed and -1.0
// should be returned. Should use the absolute value function from #2
float SquareRoot(float a) {

  float result;

  if (a < 0) {
    printf("Negative number passed\n");
    return -1.0;
  }

  if (a == 0) {
    return 0;
  }

  result = AbsoluteValue(a / a);
  return result;
}
