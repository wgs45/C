#include <stdio.h>

int main() {
    int num, row, col, value = 1;

    scanf("%d", &num);

    // ? multi dimensional arrays
    int matrix[num][num];

    for (row = 0; row < num; ++row) {
        if (row % 2 == 0) {
            for (col = 0; col < num; col++) {
                matrix[row][col] = value++;
                value++;
            }
        } else {
            for (col = num - 1; col >= 0; col--) {
                matrix[row][col] = value;
                value++;
            }
        }
    }

    for (row = 0; row < num; row++) {
        for (col = 0; col < num; col++) {
            printf("%3d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}