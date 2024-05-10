#include <stdio.h>
#include <stdlib.h>

int main() {
    int row = 3, column = 4, i = 0, x = 0, y = 0;
    int **array = (int**) malloc(sizeof(int) * row); // allocate memory for rows

    for (i = 0; i < row; i++) {
        array[i] = (int*) malloc(sizeof(int) * column); 
    }

    // initialize array elements
    for (y = 0; y < row; y++) {
        for (x = 0; x < column; x++) {
            array[y][x] = y * column + x + 1;
        }
    }

    // print arrays
    for (y = 0; y < row; y++) {
        for (x = 0; x < column; x++) {
            printf("%d ", array[y][x]);
        }
        printf("\n");
    }

    // free memory
    for (i = 0; i < row; i++) {
        free(array[i]);
    }

    free(array);

    return 0;
}
