#include <stdio.h>
#include <string.h>

// Function declaration
void join_integers(const char *sep, int a[], int size, char *result);

int main() {
    // Array of integers
    int a[] = {1, 2, 3};

    // Result string
    char result[1000];

    // Call the join_integers function
    join_integers("+", a, 3, result);

    // Print the result
    printf("%s\n", result);

    // Return 0 to indicate successful execution
    return 0;
}

void join_integers(const char *sep, int a[], int size, char *result) {
    // Initialize the result string
    result[0] = '\0';

    // Iterate over the array of integers
    for (int i = 0; i < size; i++) {
        // Convert the integer to string and append it to the result
        sprintf(result + strlen(result), "%d", a[i]);

        // Check if it's not the last element
        if (i < size - 1) {
            // Append the separator to the result
            strcat(result, sep);
        }
    }
}