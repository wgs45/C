#include <stdio.h>
#include <stdlib.h>

int main() {
    int row = 3, column = 4, i  = 0, x = 0, y = 0;

    int *array = (int*) malloc(sizeof(int) * row * column);
    for (i = 0; i < row * column; i++) {
        array[i] = i + 1;
    }

    for (y = 0; y < row; y++) {
        for (x = 0; x < column; x++) {
            printf("%d ", array[y * column + x]);
        }
        printf("\n");
    }

    return 0;
}
