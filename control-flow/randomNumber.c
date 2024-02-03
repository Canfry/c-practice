#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  time_t t;
  srandom((unsigned)time(&t));
  int randomNumer = random() % 21;

  int number_of_tries;

  printf("This is a guessing game.\n");
  printf("I have chosen a number between 0 and 20 which you must guess.\n");

  int guess;

  for (number_of_tries = 5; number_of_tries > 0; --number_of_tries) {
    printf("You have %d tr%s left.\n", number_of_tries,
           number_of_tries == 1 ? "y" : "ies");
    printf("Enter a guess: ");
    scanf("%d", &guess);

    if (guess == randomNumer) {
      printf("Congratulations. You guessed it!\n");
      goto end;
    } else if (guess < 0 || guess > 20) {
      printf("I said the number is between 0 and 20.\n");
    } else if (guess < randomNumer) {
      printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
    } else if (guess > randomNumer) {
      printf("Sorry, %d is wrong. My number is less than that.\n", guess);
    }
  }
  printf("You have had 5 tries and failed. The number was %d\n", randomNumer);

end:
  printf("End of program.\n");

  return 0;
}
