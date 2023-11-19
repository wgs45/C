#include <stdio.h>

// c program to calculate amplitude waveform
// source: uva00488

int main() {
    int numCases = 0;  // Number of test cases
    int amplitude = 0;  // Amplitude of the waveform
    int frequency = 0;  // Frequency of the waveform

    scanf("%d", &numCases);  // Reading the number of test cases from input

    for (int x = 0; x < numCases; x++) {
        scanf("%d%d", &amplitude, &frequency);  // Reading the amplitude and frequency for each test case from input

        // Print the waveform
        while (frequency > 0) {
            // Increasing part of the waveform
            for (int h = 1; h <= amplitude; h++) {
                for (int num = 1; num <= h; num++) {
                    printf("%d", h);  // Printing the current height of the waveform
                }
                printf("\n");  // Moving to the next line after each height
            }

            // Decreasing part of the waveform
            for (int h = amplitude - 1; h > 0; h--) {
                for (int num = 1; num <= h; num++) {
                    printf("%d", h);  // Printing the current height of the waveform
                }
                printf("\n");  // Moving to the next line after each height
            }

            printf("\n");  // Adding an empty line after each waveform
            frequency--;  // Decreasing the frequency counter
        }
    }

    return 0;  // Exiting the program
}