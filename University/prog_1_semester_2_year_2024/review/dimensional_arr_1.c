#include <stdio.h>

int main() {
    int directions = 0;
    int matrix[100][100];
    int x = 0, y = 0, i = 1, n = 4;

    // initialize matrix
    for (y = 0; y < n; y++) {
        for (x = 0; x < n; x++) {
            matrix[y][x] = 0;
        }
    }

    // reset position and directions
    x = 0; y = 0;

    while(i <= 16) {
        matrix[y][x] = i;

        // Check if matrix can go with the current directions
        // if can't, rotate 90 deg

        if (directions == 0) {
            if (x + 1 >= n || matrix[y][x + 1] != 0) {
                directions = 1;
            } 
        } else if (directions == 1) {
            if (y + 1 >= n || matrix[y + 1][x] != 0) {
                directions = 2;
            }
        } else if (directions == 2) {
            if (x - 1 < 0 || matrix[y][x - 1] != 0) {
                directions = 3;
            }
        } else if (directions == 3) {
            if (y - 1 < 0 || matrix[y - 1][x] != 0) {
                directions = 0;
            }
        }

        // go with specified directions
        if (directions == 0) {
            x++;
        } else if (directions == 1) {
            y++;
        } else if (directions == 2) {
            x--;
        } else if (directions == 3) {
            y--;
        }
        i++;
    }

    for (y = 0; y < n; y++) {
        for (x = 0; x < n; x++) {
            printf("%2d ", matrix[y][x]);
        }
        printf("\n");
    }

    return 0;
}
