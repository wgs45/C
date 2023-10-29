#include <stdio.h>

int main() {
    int n = 9; // Declaring and initializing the variable n with the value 9

    // Looping through the range from n to 1
    for (int i = n; i >= 1; i--) {
        // Looping through the range from 1 to i
        for (int j = 1; j <= i; j++) {
            // Checking if j is equal to i
            if (j == i) {
                // Printing j without a space after it
                printf("%d", j);
            } else {
                // Printing j with a space after it
                printf("%d ", j);
            }
        }
        // Printing a new line after each row
        printf("\n");
    }

    return 0;
}