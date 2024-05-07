#include <stdio.h>
#include <stdlib.h>

// malloc => allocates memory dynamically. It takes the number of bytes to allocate as an argument and returns a pointer to the allocated memory block.

int main() {
    int n = 0, i = 0;
    int *array;

    printf("Input N value: ");
    scanf("%d", &n);
    
    // malloc(byte), 1 byte = 8 bits
    // (int *) => a typecast to convert the void pointer returned by malloc() to a pointer to an integer.
    array = (int *) malloc (sizeof(int) * n);
    if (array == NULL) {
        printf("Cannot get memory!");
        return 1;
    }

    for (i = 0; i < n; i++) {
        array[i] = i * 2;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    free(array); // to prevent memory leaks

    return 0;
}
