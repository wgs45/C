#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // user variable
    int user_guess = 0;
    int temp_i = 0;
    int temp_j = 0;
    int initial_temp_i, initial_temp_j;

    // number generator from 1 to 100
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    printf("random: %d\n", random_number);

    // guessing
    while (1) {
        printf("Guess a number from 1 to 100: ");
        scanf("%d", &user_guess);
        if (user_guess == random_number) {
            printf("You are correct");
            break;
        } else {
            if (user_guess > random_number) {
                temp_i = user_guess - 1;
                initial_temp_i = random_number + 1;
                printf("guess from %d to %d\n", initial_temp_i, temp_i);
            } else if (user_guess < random_number) {
                temp_j = user_guess + 1;
                initial_temp_j = temp_j;
                printf("guess from %d to %d\n", initial_temp_j, 100);
            }
        }
    }
    return 0;
}
