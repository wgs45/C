#include <stdio.h>
#include <stdlib.h>

// Define the maximum number of values that can be entered
#define MAX_NUMBER 100
// Define the maximum frequency that can be counted
#define MAX_FREQUENCY 101

int main() {
    // Initialize an array to hold the frequency of each number
    int frequency[MAX_FREQUENCY] = {0};
    // Initialize the maximum frequency to 0
    int max_frequency = 0;
    // Initialize the sum of the mode to 0
    int sum_mode = 0;
    // Initialize the count of the mode to 0
    int count_mode = 0;
    // Declare a variable to hold the current number being entered
    int num;

    // Continue reading numbers until there are no more to read
    while(scanf("%d", &num) == 1) {
        // Check if the number is within the valid range
        if (num >= 0 && num <= MAX_NUMBER) {
            // Increment the frequency of the current number
            frequency[num]++;
            // Update the maximum frequency if necessary
            if (frequency[num] > max_frequency) {
                max_frequency = frequency[num];
            }
        } else {
            // Print an error message if the number is outside the valid range
            printf("No such value");
            // Exit the program with an error code
            return 1;
        }
    }

    // Loop through all possible values
    for (int i = 0; i < MAX_NUMBER; i++) {
        // If the frequency of the current value is equal to the maximum frequency
        if (frequency[i] == max_frequency) {
            // Add the current value to the sum of the mode
            sum_mode += i;
            // Increment the count of the mode
            count_mode++;
        }
    }

    // If there is more than one mode
    if (count_mode > 1) {
        // Calculate the average of the modes
        float average = (float) sum_mode / count_mode;
        // Print the average with two decimal places
        printf("%.2f", average);
    } else {
        // If there is only one mode, print the mode itself
        printf("%d", sum_mode);
    }

    // Exit the program with a success code
    return 0;
}