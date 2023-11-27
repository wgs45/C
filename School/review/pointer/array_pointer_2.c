#include <stdio.h>

int main() {
    // Declare and initialize an array of integers
    int arr[] = { 3, 5, 6, 7, 9 };

    // Declare and initialize a pointer to the first element of the array
    int *p = arr;

    // Declare and initialize a pointer to an array of 5 integers, which points to the array 'arr'
    int (*ptr)[5] = &arr;

    // Print the memory addresses of the array 'arr' and its first element
    printf("arr = %p, &arr = %p\n", arr, &arr);

    // Print the value of the first element of the array 'arr' using the pointer 'p',
    // and the value of the first element of the array 'arr' using the pointer 'ptr'
    printf("p = %d, (*ptr)[0] = %d\n", *p, (*ptr)[0]);

    // Print the memory addresses stored in the pointer 'p' and the pointer 'ptr'
    printf("p = %p; ptr = %p\n", p, ptr);

    // Print the value pointed to by the pointer 'p' and the value pointed to by the pointer 'ptr'
    printf("*p = %d, *ptr = %p\n", *p, *ptr);

    return 0;
}