#include <stdio.h>

// C program to find the sum of each row and column

int main() {
    // Define a 2D array with 5 rows and 5 columns
    int array[5][5] = {
        {10, 20, 30, 40, 50},
        {15, 25, 35, 45, 55},
        {20, 30, 40, 50, 60},
        {25, 35, 45, 55, 65},
        {30, 40, 50, 60, 70}
    };

    // Declare variables
    int row, col, i, j;

    // Declare and initialize arrays to store the sum of each row and column
    int sumRow[5] = {0}, sumCol[5] = {0};

    // Print a message indicating that we will calculate the sum values for each row and column in the array
    printf("Sum values for each row and column in the array:\n");

    // Iterate over each element in the array
    for (row = 0; row < 5; row++) {
        for (col = 0; col < 5; col++) {
            // Add the value at the current element to the sum of the current row and column
            sumRow[row] += array[row][col];
            sumCol[col] += array[row][col];
        }
    }

    // Print the sum value for each row
    for (row = 0; row < 5; row++) {
        printf("Row %d: Sum Value = %d\n", row, sumRow[row]);
    }

    // Print the sum value for each column
    for (col = 0; col < 5; col++) {
        printf("Column %d: Sum Value = %d\n", col, sumCol[col]);
    }

    return 0;
}