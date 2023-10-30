#include <stdio.h>

int main() {
    // Declare variables to store the number of rows, columns, row position, and column position
    int rows, cols, row_pos, col_pos;

    // Read the values of rows, columns, row position, and column position from the user
    scanf("%d %d %d %d", &rows, &cols, &row_pos, &col_pos);

    // Declare a 2D array with the specified number of rows and columns
    int arr[rows][cols];

    // Iterate over each element in the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Check if the current element is at the specified row and column position
            if (i == row_pos && j == col_pos) {
                // Print "1" if the current element is at the specified position
                printf("1");
            } else {
                // Print "0" if the current element is not at the specified position
                printf("0");
            }
        }
        // Print a newline character after each row
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}