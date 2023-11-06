#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initialize an array to store the frequency of each number
    int frequency[101] = {0};
    // Variables to store the maximum frequency, sum of modes, and count of modes
    int max_frequency = 0, sum_mode = 0, count_mode = 0;
    // Variable to store the input number
    int num, i;

    // Read input numbers until end of file
    while(scanf("%d", &num) == 1) {
        // Check if the input number is within the valid range
        if (num >= 0 && num <= 100) {
            // Increment the frequency count for the input number
            frequency[num]++;
            // Update the maximum frequency if necessary
            if (frequency[num] > max_frequency) {
                max_frequency = frequency[num];
            }
        } else {
            // Print an error message and exit if the input number is out of range
            printf("No such value");
            return 1;
        }
    }

    // Iterate over the frequency array
    for (i = 0; i < 100; i++) {
        // Check if the frequency of the current number is equal to the maximum frequency
        if (frequency[i] == max_frequency) {
            // Add the current number to the sum of modes and increment the count of modes
            sum_mode += i;
            count_mode++;
        }
    }

    // Check if there are multiple modes
    if (count_mode > 1) {
        // Calculate the average of the modes and print it with two decimal places
        float average = (float) sum_mode / count_mode;
        printf("%.2f", average);
    } else {
        // Print the single mode
        printf("%d", sum_mode);
    }

    return 0;
}