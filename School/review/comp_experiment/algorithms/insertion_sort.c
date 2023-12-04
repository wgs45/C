#include <stdio.h>
#include <math.h>

// insertion sort algorithm in c

// function prototypes
void insertion_sort(int arr[], int size);
void print_array(int arr[], int size);

int main() {
    // Array to be sorted
    int arr[] = {12, 11, 13, 5, 6, 1, 3, 2, 4};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform insertion sort on the array
    insertion_sort(arr, size);

    // Print the sorted array
    print_array(arr, size);

    return 0;
}

// Implementation of insertion sort algorithm
void insertion_sort(int arr[], int size) {
    int i, j, key;

    // Iterate through each element in the array
    for (i = 1; i < size; i++) {
        // Select the current element as the key
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Insert the key at its correct position in the sorted array
        arr[j + 1] = key;
    }
}

// Function to print the elements of the array
void print_array(int arr[], int size) {
    int i;

    // Iterate through each element in the array and print it
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Print a new line after printing the array
    printf("\n");
}