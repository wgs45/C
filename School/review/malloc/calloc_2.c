#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr, n, i;

    // Initialize variables
    n = 5; // number of elements
    ptr = (int*)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }

        // Get the new size for the array
        printf("\n\nEnter the new size of the array: \n");
        scanf("%d", &n);

        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, n * sizeof(int));

        // Check if memory re-allocation was successful
        if (ptr == NULL) {
            printf("Memory not re-allocated.\n");
            exit(0);
        }

        // Memory has been successfully re-allocated
        printf("Memory successfully re-allocated using realloc.\n");

        // Get the new elements of the array
        for (i = 5; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }

        // Free dynamically allocated memory
        free(ptr);
    }
    return 0;
}