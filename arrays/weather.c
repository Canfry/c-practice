// Program that finds the total rainfall for each year, the average yearly, and
// the average for each month. Input will be a 2D array of floats with 5 rows
// and 12 columns.

#include <stdio.h>

int main(void) {

  // Initialize 2D array with hard coded rainfall amounts
  float rainfall[5][12] = {
      {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0, 10.1, 11.2, 12.3},
      {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0, 10.1, 11.2, 12.3},
      {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0, 10.1, 11.2, 12.3},
      {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0, 10.1, 11.2, 12.3},
      {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0, 10.1, 11.2, 12.3}};

  float total, subtotal;
  int year, month;

  printf("YEAR\t\tRAINFALL (inches)\n");

  // Calculate total rainfall for each year
  for (year = 0, total = 0; year < 5; year++) {

    // Loop through each month and add to subtotal
    for (month = 0, subtotal = 0; month < 12; month++) {

      subtotal += rainfall[year][month];
    }

    printf("%5d \t%15.1f\n", year + 1, subtotal);
    total += subtotal;
  }

  printf("\nThe yearly average is %.1f inches.\n\n", total / 5);
  printf("MONTHLY AVERAGES:\n\n");
  printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");

  for (month = 0; month < 12; month++) {

    // Loop through each year and add to subtotal
    for (year = 0, subtotal = 0; year < 5; year++) {

      subtotal += rainfall[year][month];
    }

    printf("%4.1f\t", subtotal / 5);
  }
  return 0;
}
