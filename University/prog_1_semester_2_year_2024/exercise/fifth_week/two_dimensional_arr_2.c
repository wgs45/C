#include <stdio.h>

int main() {
    int x = 0, y = 0, z = 1;
    int directions = 0;  // 0 - right, 1 - down, 2 - left, 3 - up
    int max_value, rows, cols;

    // Prompt user to enter the number of rows and columns for the matrix
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Prompt user to enter the maximum value for the matrix
    printf("Enter the maximum value for the matrix: ");
    scanf("%d", &max_value);

    // Initialize matrix with zeros
    for (y = 0; y < rows; y++) {
        for (x = 0; x < cols; x++) {
            matrix[y][x] = 0;
        }
    }

    x = 0, y = 0;

    while (z <= max_value && y < rows && x < cols) {
        matrix[y][x] = z;

        if (directions == 0) {
            if (x + 1 >= cols || matrix[y][x + 1] != 0) {
                directions = 1;
                y++;
            } else {
                x++;
            }
        } else if (directions == 1) {
            if (y + 1 >= rows || matrix[y + 1][x] != 0) {
                directions = 2;
                x--;
            } else {
                y++;
            }
        } else if (directions == 2) {
            if (x - 1 < 0 || matrix[y][x - 1] != 0) {
                directions = 3;
                y--;
            } else {
                x--;
            }
        } else if (directions == 3) {
            if (y - 1 < 0 || matrix[y - 1][x] != 0) {
                directions = 0;
                x++;
            } else {
                y--;
            }
        }

        z++;
    }

    // Print the matrix
    for (y = 0; y < rows; y++) {
        for (x = 0; x < cols; x++) {
            printf("%2d ", matrix[y][x]);
        }
        printf("\n");
    }

    return 0;
}
