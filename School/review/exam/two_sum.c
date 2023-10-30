#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[1000]; // Array to store input integers
    int count = 0; // Counter to keep track of the number of integers read
    int input; // Variable to store the input integer

    // Read integers until there are no more or the limit of 1000 is reached
    while (scanf("%d", &input) == 1 && count < 1000) {
        nums[count] = input; // Store the input integer in the array
        count++; // Increment the counter
    }

    // Check if any two numbers sum up to 0
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (nums[i] + nums[j] == 0) {
                printf("-1\n"); // If two of them have sum equal to 0
                return 0; // Exit the program
            }
        }
    }

    printf("0\n"); // If no two of them have sum equal to 0
    return 0; // Exit the program
}