#include <stdio.h>

// C program to find max and min of each row and column

int main() {
    int array[5][5] = {
        {10, 20, 30, 40, 50},   // Initialize a 2D array with values
        {15, 25, 35, 45, 55},
        {20, 30, 40, 50, 60},
        {25, 35, 45, 55, 65},
        {30, 40, 50, 60, 70}
    };
    int row, col, i, j;
    int minRowValue, maxRowValue, minColValue, maxColValue;

    printf("Max and Min values for each row and column in the array:\n");

    // Find the minimum and maximum values for each row
    for (row = 0; row < 5; row++) {
        minRowValue = array[row][0];    // Assume the first element in the row is the minimum
        maxRowValue = array[row][0];    // Assume the first element in the row is the maximum

        // Iterate through each column in the row
        for (col = 0; col < 5; col++) {
            if (array[row][col] < minRowValue) {    // If the current element is smaller than the minimum value
                minRowValue = array[row][col];      // Update the minimum value
            }

            if (array[row][col] > maxRowValue) {    // If the current element is greater than the maximum value
                maxRowValue = array[row][col];      // Update the maximum value
            }
        }

        printf("Row %d: Min Value = %d, Max Value = %d\n", row, minRowValue, maxRowValue);
    }

    // Find the minimum and maximum values for each column
    for (col = 0; col < 5; col++) {
        minColValue = array[0][col];    // Assume the first element in the column is the minimum
        maxColValue = array[0][col];    // Assume the first element in the column is the maximum

        // Iterate through each row in the column
        for (row = 0; row < 5; row++) {
            if (array[row][col] < minColValue) {    // If the current element is smaller than the minimum value
                minColValue = array[row][col];      // Update the minimum value
            }

            if (array[row][col] > maxColValue) {    // If the current element is greater than the maximum value
                maxColValue = array[row][col];      // Update the maximum value
            }
        }

        printf("Column %d: Min Value = %d, Max Value = %d\n", col, minColValue, maxColValue);
    }

    return 0;
}