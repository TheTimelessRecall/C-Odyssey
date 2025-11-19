#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0, max_attempts = 5;
    int play_again = 1;

    // Seed the random number generator
    srand(time(0));

    printf("=========================================\n");
    printf("    NUMBER GUESSING GAME\n");
    printf("=========================================\n\n");

    while (play_again) {
        // Generate a random number between 1 and 100
        secret_number = (rand() % 100) + 1;
        attempts = 0;

        printf("I'm thinking of a number between 1 and 100.\n");
        printf("You have %d attempts to guess it.\n\n", max_attempts);

        // Game loop
        while (attempts < max_attempts) {
            printf("Attempt %d/%d -> Enter your guess: ", attempts + 1, max_attempts);
            scanf("%d", &guess);
            attempts++;

            if (guess == secret_number) {
                printf("\nCONGRATULATIONS!\n");
                printf("You guessed the number %d correctly in %d attempts!\n\n", secret_number,
                       attempts);

                // Provide feedback based on number of attempts
                if (attempts == 1) {
                    printf("AMAZING! You got it on the FIRST try!\n");
                } else if (attempts <= 3) {
                    printf("Excellent guessing skills!\n");
                } else {
                    printf("Well done!\n");
                }
                break;
            } else if (guess < secret_number) {
                printf("Too low! Try a higher number.\n");
            } else {
                printf("Too high! Try a lower number.\n");
            }

            // Show remaining attempts
            if (attempts < max_attempts) {
                printf("You have %d attempts left.\n\n", max_attempts - attempts);
            }
        }

        // If the player runs out of attempts
        if (attempts == max_attempts && guess != secret_number) {
            printf("\nGAME OVER!\n");
            printf("The number was %d.\n\n", secret_number);
        }

        // Ask if player wants to play again
        printf("Would you like to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &play_again);
        printf("\n");
    }

    printf("Thanks for playing! Goodbye!\n");
    printf("=========================================\n");

    return 0;
}