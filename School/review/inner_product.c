#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr_size;

    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int first_array[arr_size], second_array[arr_size];

    printf("Enter the first array elements: \n");
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &first_array[i]);
    }

    printf("Enter the second array elements: \n");
    for (int j = 0; j < arr_size; j++) {
        scanf("%d", &second_array[j]);
    }

    int result = 0;
    for (int k = 0; k < arr_size; k++) {
        int multiplication_result = first_array[k] * second_array[k];
        printf("Multiplication result: %d\n", multiplication_result);
        result += multiplication_result;
    }

    printf("Result: %d\n", result);

    return 0;
}