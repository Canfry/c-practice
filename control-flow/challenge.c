#include <stdio.h>

int main(void) {
  double hours_weekly, gross_pay, taxes, net_pay;

  double hourly_rate = 12.00;

  printf("Enter the number of hours worked weekly: ");
  scanf("%lf", &hours_weekly);

  if (hours_weekly <= 40) {
    gross_pay = hours_weekly * hourly_rate;

    if (gross_pay <= 300) {
      taxes = gross_pay * 0.15;
    } else if (gross_pay > 300 && gross_pay <= 450) {
      taxes = 300 * 0.15 + (gross_pay - 300) * 0.20;
    } else {
      taxes = 300 * 0.15 + 150 * 0.20 + (gross_pay - 450) * 0.25;
    }
  } else {
    gross_pay = 40 * hourly_rate + (hours_weekly - 40) * hourly_rate * 1.5;

    if (gross_pay <= 300) {
      taxes = gross_pay * 0.15;
    } else if (gross_pay > 300 && gross_pay <= 450) {
      taxes = 300 * 0.15 + (gross_pay - 300) * 0.20;
    } else {
      taxes = 300 * 0.15 + 150 * 0.20 + (gross_pay - 450) * 0.25;
    }
  }

  printf("Your gross pay is: $%.2lf\nYour taxes are: $%.2lf\nYour net pay is: "
         "$%.2lf\n",
         gross_pay, taxes, gross_pay - taxes);

  return 0;
}
