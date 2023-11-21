#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator based on the current time
    srand(time(NULL));

    // Declare an array to store 15 integers
    int numbers[15];

    // Generate random numbers and store them in the array
    for (int i = 0; i < 15; i++) {
        numbers[i] = rand() % 100;
    }

    // Print the generated numbers
    printf("Generated numbers: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Calculate the sum of even numbers and the sum of odd numbers
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < 15; i++) {
        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddSum += numbers[i];
        }
    }

    // Print the sums
    printf("The odd sum: %d\n", oddSum);
    printf("The even sum: %d\n", evenSum);

    return 0;
}