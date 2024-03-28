#include <stdio.h>

int main() {
    int matrix[4][4] = {0};  // Initialize matrix with zeros
    int x = 0, y = 0, z = 1, n = 4;
    int directions = 0;  // 0 - right, 1 - down, 2 - left, 3 - up

    while (z <= 16) {
        matrix[y][x] = z;

        if (directions == 0) {
            if (x + 1 >= n || matrix[y][x + 1] != 0) {
                directions = 1;
                y++;
            } else {
                x++;
            }
        } else if (directions == 1) {
            if (y + 1 >= n || matrix[y + 1][x] != 0) {
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
    for (y = 0; y < n; y++) {
        for (x = 0; x < n; x++) {
            printf("%2d ", matrix[y][x]);
        }
        printf("\n");
    }

    return 0;
}
