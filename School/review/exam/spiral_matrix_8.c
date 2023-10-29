#include <stdio.h>

// Function to print a spiral matrix
void spiral_matrix(int num);

int main() {
    int num;

    // Read the number of rows and columns from the user
    scanf("%d", &num);

    // Call the function to print the spiral matrix
    spiral_matrix(num);

    return 0;
}

// Function to print a spiral matrix
void spiral_matrix(int num) {
    int a[num][num]; // Array to store the matrix
    int i, j; // Loop variables
    int k = 1; // Variable to store the value to be assigned to the matrix

    // Iterate over the rows
    for (i = 0; i < num / 2; i++) {
        // Fill the top row
        for (j = i; j < num - i; j++) {
            a[i][j] = k++;
        }
        // Fill the right column
        for (j = i + 1; j < num - i; j++) {
            a[j][num - i - 1] = k++;
        }
        // Fill the bottom row
        for (j = num - i - 2; j > i; j--) {
            a[num - i - 1][j] = k++;
        }
        // Fill the left column
        for (j = num - i - 1; j > i; j--) {
            a[j][i] = k++;
        }
    }

    // Print the matrix
    for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}