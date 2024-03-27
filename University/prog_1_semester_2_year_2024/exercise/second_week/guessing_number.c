#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess_number = 0;
    int random_number;
    int lower_bound = 1, upper_bound = 100;

    // Number generator
    srand(time(0));
    random_number = (rand() % 100) + 1;
    printf("Random number: %d\n", random_number);

    while(1) {
        printf("Please guess a number from 1 to 100: ");
        scanf("%d", &guess_number);

        // Check for valid input
        if (guess_number < 1 || guess_number > 100) {
            printf("Invalid value, please guess from 1 to 100.\n");
            continue;
        }

        if (guess_number == random_number) {
            printf("You are correct!\n");
            break;
        } else if (guess_number < random_number) {
            printf("Guess from %d to %d\n", guess_number + 1, upper_bound);
            lower_bound = guess_number + 1;
        } else {
            printf("Guess from %d to %d\n", lower_bound, guess_number - 1);
            upper_bound = guess_number - 1;
        }
    }

    return 0;
}
