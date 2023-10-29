#include <limits.h>
#include <stdio.h>

// Function to find the minimum and
// maximum element of the array
// ! function prototypes
void findMinimumMaximum(int arr[], int N);

// Driver Code
int main() {
	// Given array
	// int arr[] = { 1, 2, 4, -99, 100, 1000};
    int arr[] = {};

    printf("Enter an value: ");
    scanf("%d", &arr[0]);

	// length of the array
	int N = sizeof(arr) / sizeof(arr[0]);

    // loop
    for (int i = arr[0]; i < N; i++) {
        printf("%d ", arr[i]);
    }

	// Function call
	findMinimumMaximum(arr, N);

	return 0;
}

void findMinimumMaximum(int arr[], int N) {
	int i;

	// variable to store the minimum
	// and maximum element
	int minE = INT_MAX, maxE = INT_MIN;

	// Traverse the given array
	for (i = 0; i < N; i++) {

		// If current element is smaller
		// than minE then update it
		if (arr[i] < minE) {
			minE = arr[i];
		}

		// If current element is greater
		// than maxE then update it
		if (arr[i] > maxE) {
			maxE = arr[i];
		}
	}

	// Print the minimum and maximum element
	printf("The minimum element is %d", minE);
	printf("\n");
	printf("The maximum element is %d", maxE);

	return;
}
