#include <stdio.h>
#include <stdlib.h>

// This is the main function where the program starts execution
int main(void) {
    // Declare a variable to store the size of the array
    int arr_size;

    // Prompt the user to enter the size of the array
    printf("Enter array size: ");
    scanf("%d", &arr_size);

    // Declare two arrays of size 'arr_size' to store the elements
    int first_array[arr_size], second_array[arr_size];

    // Prompt the user to enter the elements of the first array
    printf("Enter the first array elements: \n");
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &first_array[i]);
    }

    // Prompt the user to enter the elements of the second array
    printf("Enter the second array elements: \n");
    for (int j = 0; j < arr_size; j++) {
        scanf("%d", &second_array[j]);
    }

    // Declare a variable to store the result of the multiplication
    int result = 0;

    // Iterate over the arrays and perform element-wise multiplication
    for (int k = 0; k < arr_size; k++) {
        int multiplication_result = first_array[k] * second_array[k];

        // Print the multiplication result
        printf("Multiplication result: %d\n", multiplication_result);

        // Add the multiplication result to the total result
        result += multiplication_result;
    }

    // Print the final result
    printf("Result: %d\n", result);

    // Return 0 to indicate successful execution
    return 0;
}