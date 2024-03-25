#include <stdio.h>

int main() {
    int arr_1[5] = { 3, 4, 1, 2, 5}, i, j;
    int arr_2[3][2] = {{1, 2}, {3, 4}, {4, 5}};

    // * print the value of first array
    for (i = 0; i < 5; i++) {
        printf("Single array: %d\n", arr_1[i]);
    }

    // * print the value of second array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Multi dimension array: %d\n", arr_2[i][j]);
        }
    }

    return 0;
}