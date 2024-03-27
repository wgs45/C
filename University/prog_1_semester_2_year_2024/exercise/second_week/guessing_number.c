#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess_number = 0;
    int i = 0, j = 0;
    int temp_i = 0, temp_j = 0, initial_i = 0, initial_j = 0;

    // number generator
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    printf("Random numbers: %d\n", random_number);

    while(1) {
        printf("Please guess a number from 0 - 100: ");
        scanf("%d", &guess_number);

        if (guess_number > 100) {
            printf("Invalid value, please guess from 1 to 100.\n");
        } else if (guess_number == random_number) {
            printf("Your are correct!\n");
            break;
        } else if (guess_number < random_number) {
            temp_i = guess_number - 1;
            initial_i = random_number + 1;
            printf("guess from %d to %d\n", initial_i, temp_i);
        } else if (guess_number > random_number) {
            temp_j = guess_number + 1;
            initial_j = temp_j;
            printf("guess from %d to %d\n", initial_j, 100);
        } 
    }
   

    return 0;
}
