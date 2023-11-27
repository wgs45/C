#include <stdio.h>

int main() {
    // Declare an array of integer pointers
    int *arr[3], i;

    // Declare and initialize three separate arrays of integers
    int arr0[5] = { 1, 2, 3, 4, 5 };
    int arr1[6] = { 5, 0, 11, 29, 43, -2 };
    int arr2[4] = { -1, 2, -3, -4 };

    // Assign the addresses of the three arrays to the integer pointers in the array
    arr[0] = arr0;
    arr[1] = arr1;
    arr[2] = arr2;

    // Print the values of the elements in arr[1] using array notation
    for (i = 0; i < 6; i++) {
        printf("arr[1][i]: %d ", arr[1][i]);
        printf("\n");
    }

    // Print the values of the elements in arr[2] using pointer arithmetic
    for (i = 0; i < 4; i++) {
        printf("arr[2] + i: %d ", *(arr[2] + i));
        printf("\n");
    }

    return 0;
}