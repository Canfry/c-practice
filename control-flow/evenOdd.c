#include <stdio.h>

int main(void) {
  int number_to_test, remainder;

  printf("Enter the number to test: ");
  scanf("%i", &number_to_test);

  remainder = number_to_test % 2;

  if (remainder == 0) {
    printf("the number is even\n");
  } else {
    printf("the number is odd\n");
  }

  return 0;
}
