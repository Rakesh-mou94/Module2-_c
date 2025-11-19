#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;
    int maxAttempts = 7;   // limit attempts

    // Seed the random number
    srand(time(0));
    randomNumber = rand() % 100 + 1;  // random number between 1 and 100

    printf("Guess the number (between 1 and 100)\n");
    printf("You have %d attempts!\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == randomNumber) {
            printf("🎉 Congratulations! You guessed it in %d attempts.\n", attempts);
            return 0;
        }
        else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        }
        else {
            printf("Too low! Try again.\n");
        }
    }

    printf("❌ Sorry, you're out of attempts!\n");
    printf("The correct number was: %d\n", randomNu
