#include <stdio.h>
#include <stdlib.h>

int main() {
    int small = 3, large = 6, i = 0;

    // allocate memory
    int *array = (int*) malloc(sizeof(int) * small);

    // initialize variables
    array[0] = 3, array[1] = 4, array[2] = 9;
    printf("First address: %x\n", array);
    printf("%d %d %d\n", array[0], array[1], array[2]);

    // alocate memory again
    array = (int*) malloc(sizeof(int) * large);

    // initialize variables
    printf("Second address: %x\n", array);
    array[3] = 11, array[4] = 16, array[5] = 19;

    // print results
    for(i = 0; i < large; i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}
