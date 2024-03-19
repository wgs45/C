#include <stdio.h>

int main() {
    int N = 4;
    int matrix[N][N];
    int top_row = 0, bottom_row = N - 1, left_column = 0, right_column = N - 1, num = 1;

    // Initialize the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = 0;
        }
    }
 
    while (num <= 12) {
        // Fill top row
        for (int i = left_column; i <= right_column; i++)
            matrix[top_row][i] = num++;
        top_row++;

        // Fill right column
        for (int i = top_row; i <= bottom_row; i++)
            matrix[i][right_column] = num++;
        right_column--;

        // Fill bottom row
        for (int i = right_column; i >= left_column; i--)
            matrix[bottom_row][i] = num++;
        bottom_row--;

        // Fill left column
        for (int i = bottom_row; i >= top_row; i--)
            matrix[i][left_column] = num++;
        left_column++;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

