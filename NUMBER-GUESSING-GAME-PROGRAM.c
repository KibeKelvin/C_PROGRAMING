/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:08/10/2025
*/
#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int secret, guess, attempts = 0;

    // generate a random number between 1 and 20
    srand(time(0));
    secret = rand() % 20 + 1;

    printf("Guess the number (1–20):\n");

    while (1) {  // infinite loop until correct
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;  // exit loop when correct
        }
    }

    return 0;
}
