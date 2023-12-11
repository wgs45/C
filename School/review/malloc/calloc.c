#include <stdio.h>
#include <stdlib.h>

// calloc initially contains 0 as initial values
// c program to demonstrate what calloc does
// sample input:
// 5
// 0 0 0 0 0

// sample output:
// 0 0 0 0 0

int main() {
    int *a, n, i; // Declare integer pointer a, variables n and i

    scanf("%d", &n); // Read an integer from user input and store it in n

    a = calloc(n, sizeof(int)); // Allocate memory for an array of n integers
    if (a == NULL) { // Check if memory allocation failed
        printf("Memory allocation failed\n"); // Print an error message
        return 1; // Exit the program with a non-zero status code
    }

    for (i = 0; i < n; i++) { // Loop from 0 to n-1
        if (scanf("%d", &a[i]) != 1) { // Read an integer from user input and store it in a[i]
            printf("Invalid input\n"); // Print an error message
            free(a); // Free the allocated memory
            return 1; // Exit the program with a non-zero status code
        }
    }

    for (i = 0; i < n; i++) { // Loop from 0 to n-1
        printf("%d\n", a[i]); // Print the value of a[i]
    }

    free(a); // Free the allocated memory

    return 0; // Exit the program with a status code of 0 (success)
}