// guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));

    int random = (rand() % 100) + 1;
    int number;

      printf("Guess a number between 1-100!\n");
      scanf("%d", &number);

        if (number == random) {
          printf("correct, you guessed it!\n");
          }
          else if (number > random) {
          printf("too high. ");
          }
          else if (number < random) {
          printf("too low. ");
          }
                   
          printf("the number was %d\n", random);
        
  return 0;
}