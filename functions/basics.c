#include <stdio.h>

int add(int a, int b);

int main(void) {

  int result = add(1, 2);
  printf("The result is %d\n", result);

  return 0;
}

int add(int a, int b) { return a + b; }
