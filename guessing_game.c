/*
NAME:VICTORIA MUTETHYA MUSILI
REGNO:PA106/G/29037/25
Description:a number guessing game 

*/

#include <stdio.h>

int main() {
    int secretNumber = 7;  // fixed secret number between 1 and 20
    int guess, attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20.\n");
    printf("Try to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}
