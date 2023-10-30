#include <stdio.h>

// Function prototype
int findMode(int arr[], int size);

int main() {
    // Variable to store the number of elements
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the number of elements is valid
    if (n > 100 || n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1;
    }

    // Array to store the elements
    int arr[100];

    // Prompt the user to enter the elements
    printf("Enter the elements: \n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Find the mode of the elements
    int mode = findMode(arr, n);

    // Check if a mode was found
    if (mode != -1) {
        printf("The mode is: %d\n", mode);
    } else {
        printf("No mode found.\n");
    }

    return 0;
}

// Function to find the mode of an array
int findMode(int arr[], int size) {
    int maxCount = 0;
    int mode = -1;

    // Iterate through the array to find the mode
    for (int i = 0; i < size; ++i) {
        int count = 0;

        // Count the occurrences of each element
        for (int j = 0; j < size; ++j) {
            if (arr[j] == arr[i])
                ++count;
        }

        // Update the maxCount and mode if a higher count is found
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}