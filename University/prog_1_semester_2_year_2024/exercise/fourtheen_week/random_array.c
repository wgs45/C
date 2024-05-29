#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int *generate_arr(int n);

int main() {
  srand(time(NULL)); // Seed the random number generator

  int n = rand() % 20 + 1; // Generate a random number from 1 to 20
  int *arr = generate_arr(n); // Call the function to generate an array
  int i = 0;

  // Print the elements of the array
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  free(arr); // Free the dynamically allocated memory

  return 0;
}

// Function definition for generating an array
int *generate_arr(int n) {
  int i = 0;
  int *arr = (int *)malloc(n * sizeof(int)); // Allocate memory for the array

  // Fill the array with random values
  for (i = 0; i < n; i++) {
    arr[i] = rand() % 40;
  }

  return arr; // Return a pointer to the allocated memory
}

