#include <stdio.h>

// define global variable max size of array
#define MAX_SIZE 4

int main() {
    int arr[MAX_SIZE];
    int first, second, i;

    // input value
    for (i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second to the smallest value possible
    first = second = arr[0];

    for (i = 0; i < MAX_SIZE; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", second);

    return 0;
}
