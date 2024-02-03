#include <stdio.h>

int main(void) {

  int grades[10];
  int count = 10;
  int sum = 0;
  double average = 0.0f;

  printf("Enter the 10 grades: \n");

  // Read the ten numbers to be averaged
  for (int i = 0; i < count; i++) {
    printf("%2d> ", i + 1);
    scanf("%d", &grades[i]); // Read a grade
    sum += grades[i];        // Add it to sum
  }

  average = (double)sum / count; // Cast the sum to double
  // Print the results
  printf("\nAverage of the ten grades entered is: %.2f\n", average);

  return 0;
}
