#include <stdio.h>

// c program to find the first and second largest value
// in an array

// Function prototypes
int find_two_largest(int arr[], int size, int *largest, int *second_largest);

int main() {
    // Example usage

    // Declare and initialize an array of numbers
    int numbers[] = {4, 2, 7, 1, 9, 5};

    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Declare variables to store the largest and second largest values
    int largest, second_largest;

    // Call the function `find_two_largest` to find the two largest elements in the array
    // Pass the array, size, and addresses of `largest` and `second_largest` variables as arguments
    if (find_two_largest(numbers, size, &largest, &second_largest)) {
        // If the function returns 1 (success), print the largest and second largest values
        printf("Largest: %d\nSecond Largest: %d\n", largest, second_largest);
    } else {
        // If the function returns 0 (failure), print an error message
        printf("Array size is not sufficient to find two largest elements.\n");
    }

    return 0;
}

// Function to find the two largest elements in an array
int find_two_largest(int arr[], int size, int *largest, int *second_largest) {
    // Check if the array has at least two elements
    if (size < 2) {
        // If not, return 0 (failure)
        return 0;
    }

    // Initialize `largest` and `second_largest` with the first element of the array
    *largest = *second_largest = arr[0];

    // Iterate through the array starting from the second element
    for (int i = 1; i < size; ++i) {
        if (arr[i] > *largest) {
            // If the current element is greater than the current `largest`,
            // update `second_largest` with the value of `largest`
            // and update `largest` with the current element
            *second_largest = *largest;
            *largest = arr[i];
        } else if (arr[i] > *second_largest && arr[i] != *largest) {
            // If the current element is greater than the current `second_largest`
            // and it is not equal to `largest`,
            // update `second_largest` with the current element
            *second_largest = arr[i];
        }
    }

    // Return 1 (success) indicating that the two largest elements were found
    return 1;
}