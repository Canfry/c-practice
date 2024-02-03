#include <stdio.h>

int main(void) {
  int minutes;
  double days = 0.0;
  double years = 0.0;

  printf("Enter the number of minutes: ");
  scanf("%d", &minutes);

  days = minutes / 60.0 / 24.0;
  years = days / 365.0;

  printf("%d minutes is approximately %.2lf days and %lf years\n", minutes,
         days, years);

  return 0;
}
