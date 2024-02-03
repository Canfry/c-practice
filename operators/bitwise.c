#include <stdio.h>

int main(void) {
  unsigned int a = 60; // 60 = 0011 1100
  unsigned int b = 13; // 13 = 0000 1101

  int result = 0;

  // result = a & b; // Read the binary from left to right. If both equal to
  //  1(true) = 1 if not = 0 => result:12 = 0000 1100

  // result = a | b; // Read the binary from left to right. If one of them equal
  //  to 1(true) = 1 if not = 0 => result:61 = 0011 1101

  // result = a ^ b; // Read the binary from left to right. If both equal to 1
  //  (true) = 0 if both equal 0 = 0 and if one of those equal 1 = 1 =>
  //  result:49 = 0011 0001

  // result = ~a; // Read the binary from left to right. If 1(true) = 0 and if
  //  0 = 1 => result:-61 instead of 195 => on the left it's 1 so negative
  //  number => -128+64+2+1 = -61 = 1100 0011

  // result = a << 2; // Move by 2 to the left => result:240 = 1111 0000

  result = a >> 2; // Move by 2 to the right => result:15 = 0000 1111

  printf("Result is %d\n", result);

  return 0;
}
