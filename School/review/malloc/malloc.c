#include <stdio.h>
#include <stdlib.h>

// malloc initially contain garbage values
// c program to demonstrate what malloc does
// sample input:
// 5
// 1 2 3 4 5

// sample output:
// 1 2 3 4 5

int main() {
    int *a, n, i; // declare variables a (pointer to int), n (number of elements), i (loop counter)

    scanf("%d", &n); // read the number of elements from user input

    a = malloc(n * sizeof(int)); // dynamically allocate memory for an array of n integers

    if (a == NULL) { // check if memory allocation failed
        printf("Memory allocation failed\n"); // print error message
        return 1; // return with error code
    }

    for (i = 0; i < n; i++) { // loop to read n integers from user input
        if (scanf("%d", &a[i]) != 1) { // check if input is invalid
            printf("Invalid input\n"); // print error message
            free(a); // free the allocated memory
            return 1; // return with error code
        }
    }

    for (i = 0; i < n; i++) { // loop to print the array elements
        printf("%d ", a[i]); // print each element followed by a space
    }

    printf("\n"); // print newline character

    free(a); // free the allocated memory

    return 0; // return success code
}