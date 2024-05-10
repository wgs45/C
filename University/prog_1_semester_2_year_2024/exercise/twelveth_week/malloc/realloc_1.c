#include <stdio.h>
#include <stdlib.h>

int main() {
    int small = 3, large = 6, i = 0;

    // allocate memory
    int *array = (int*) malloc(sizeof(int) * small);
    for (i = 0; i < small; i++) {
        array[i] = i + 1;
    }

    // print results
    for (i = 0; i < small; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    // reallocate memory
    array = (int*) realloc(array, sizeof(int) * large);
    for (i = small; i < large; i++) {
        array[i] = i + 1;
    }

    for (i = 0; i < large; i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}
