#include <stdio.h>

// Quick sort algorithm in c program

// ! Function prototype
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void print_array(int arr[], int size);

int main() {
    // The array to be sorted
    int arr[] = {10, 7, 8, 9, 1, 5};

    // The size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using quicksort
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    printf("Sorted array: \n");
    print_array(arr, n);

    return 0;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    // Choose the rightmost element as the pivot
    int pivot = arr[high];

    // Index of smaller element
    int i = (low - 1);

    // Temporary variable for swapping elements
    int temp;

    // Iterate through the array
    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than the pivot
        if (arr[j] < pivot) {
            // Increment the index of the smaller element
            i++;

            // Swap the current element with the element at the smaller index
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap the pivot element with the element at the next index of the smaller element
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    // Return the index of the pivot element
    return i + 1;
}

// Function to perform quicksort
void quickSort(int arr[], int low, int high) {
    int pivot;
    
    // If there are more than one element
    if (low < high) {
        // Partition the array and get the pivot index
        pivot = partition(arr, low, high);

        // Recursively sort the elements before and after the pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array
void print_array(int arr[], int size) {
    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Print each element
        printf("%d ", arr[i]);
    }

    // Print a new line
    printf("\n");
}
