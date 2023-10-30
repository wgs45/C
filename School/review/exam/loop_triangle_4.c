#include <stdio.h>

int main() {
    int i, j; // Declare two integer variables i and j

    for(i = 9; i >= 1; i--) { // Loop from 9 to 1 decrementing i by 1 in each iteration
        for (j = 1; j <= 9; j++) { // Loop from 1 to 9 incrementing j by 1 in each iteration
            if (j < i) { // Check if j is less than i
                printf("  "); // If true, print two spaces
            } else {
                printf("%d ", 9 - j + 1); // If false, print the value of 9 - j + 1 followed by a space
            }
        }
        printf("\n"); // Print a new line after each row is printed
    }

    return 0; // Return 0 to indicate successful execution of the program
}
