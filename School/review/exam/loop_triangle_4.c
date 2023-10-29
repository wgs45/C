#include <stdio.h>

int main() {
    int n = 9; // Set the number of rows in the triangle

    // Outer loop to iterate over each row
    for (int i = 1; i <= n; i++) {
        // Inner loop to print leading spaces
        for (int j = 0; j < n - i; j++) {
            printf("    "); // Print 4 spaces
        }

        // Inner loop to print decreasing numbers
        for (int k = i; k >= 1; k--) {
            printf("%2d  ", k); // Print the number with 2 spaces
        }

        printf("\n"); // Print a new line
    }

    return 0;
}