#include <stdio.h>

int main(void) {
  float fahrenheit = 0.0;
  float celsius = 0.0;

  printf("Enter the temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

  printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

  return 0;
}
