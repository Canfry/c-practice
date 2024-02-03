#include <stdio.h>

const int MONTHS = 12;

int main(void) {

  int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  for (int i = 0; i < MONTHS; i++) {
    printf("Months %d has %d days\n", i + 1, days[i]);
  }

  return 0;
}
