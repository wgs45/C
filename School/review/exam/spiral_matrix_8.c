#include <stdio.h>

// ! Function prototype
void spiral_matrix(int num);

int main() {
    // Read the number of rows and columns from the user
    int num;
    scanf("%d", &num);
    // Call the function to print the spiral matrix
    spiral_matrix(num);
    return 0;
}

void spiral_matrix(int num) {
    // Declare a 2D array to store the matrix
    int a[num][num];
    // Initialize variables
    int i, j;
    int k = 1;
    int top = 0, bottom = num - 1, left = 0, right = num - 1;

    // Loop until the top and left boundaries meet
    while (top <= bottom && left <= right) {
        // Fill the top row
        for (j = left; j <= right; j++) {
            a[top][j] = k++;
        }
        top++;

        // Fill the right column
        for (i = top; i <= bottom; i++) {
            a[i][right] = k++;
        }
        right--;

        // Fill the bottom row
        if (top <= bottom) {
            for (j = right; j >= left; j--) {
                a[bottom][j] = k++;
            }
        }
        bottom--;

        // Fill the left column
        if (left <= right) {
            for (i = bottom; i >= top; i--) {
                a[i][left] = k++;
            }
        }
        left++;
    }

    // Print the matrix
    for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}