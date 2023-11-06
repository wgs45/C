#include <stdio.h>

#define MAX_SIZE 100

// compute the sum of non negative integers
// sample input:
// 1 2 3
// -1 -2 -3 1

// sample output:
// 6
// 1

int main() {
    int arr[MAX_SIZE];
    int i = 0, result;

    while(scanf("%d", &arr[i]) != EOF) {
        // Check if the integer is positive
        if (arr[i] > 0) {
            // If positive, add it to the sum
            result = result + arr[i];
        }
        // Increment the index
        i++;
    }

    // Print the sum of positive integers
    printf("%d", result);

    return 0;
}