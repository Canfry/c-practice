#include <stdio.h>

// Find prime number from 3-100
// No input
// Output = each prime number seperated by a space on a single line
// Need to create an array that will store each prime numner
// You should use loops to only find prime numbers up to 100 and a loop to print
// out the prime array

int main(void) {
  int prime[100] = {1, 2};

  for (int i = 3; i < 100; i++) {
    if (i % 2 != 0) {

      prime[i] = i;

      for (int j = 3; j < i; j++) {
        if (i % j == 0) {
          prime[i] = 0;
        }
      }
      printf("%d\n", prime[i]);
    }
  }

  for (int i = 0; i < 100; i++) {
    if (prime[i] != 0) {
      printf("%d, ", prime[i]);
    }
  }
  return 0;
}
