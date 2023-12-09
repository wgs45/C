#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// c program gangster problem
// source: uva10041

// sample input:
// 2
// 2 2 4
// 3 2 4 6

// sample output:
// 2
// 4

#define MAX 500

int num[MAX];

// Function prototype
void insertion_sort(int n, int index);

int main() {
    int use_case;

    // Read the number of use cases from input until end of file
    while(scanf("%d", &use_case) != EOF) {
        // Process each use case
        while(use_case--) {
            int index = 0, people, n;

            // Read the number of people in the current use case
            scanf("%d", &people);

            // Read the numbers and insert them into the sorted array
            while(people--) {
                scanf("%d", &n);
                insertion_sort(n, index++);
            }

            // Calculate the median of the numbers in the array
            index--;
            int mid = index & 1 ? (num[index / 2] + num[index / 2 + 1]) / 2 : num[index / 2];

            // Calculate the sum of the absolute differences between each number and the median
            int i, sum = 0;
            for(i = 0; i <= index; i++) {
                sum += abs(mid - num[i]);
            }

            // Print the sum
            printf("%d\n", sum);
        }
    }

    return 0;
}


void insertion_sort(int n, int index) {
    int i;

    // Find the correct position to insert the number
    for (i = index; i && n < num[i - 1]; i--) {
        num[i] = num[i - 1];
    }

    // Insert the number into the array
    num[i] = n;
}