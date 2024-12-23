#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("Welcome to the guessing game! Guess a number between 1 and 100: ");

    do {
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again: ");
        } else if (guess < number) {
            printf("Too low! Try again: ");
        } else {
            printf("Congratulations! You've guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
