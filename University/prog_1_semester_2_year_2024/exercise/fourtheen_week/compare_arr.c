#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b, int size);

int main() {
  int size = 0, i = 0;

  printf("Enter the size of both arrays: ");
  scanf("%d", &size);

  int *array_1 = (int *)malloc(size * sizeof(int));
  int *array_2 = (int *)malloc(size * sizeof(int));

  // Check if memory allocation was successful
  if (array_1 == NULL || array_2 == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Enter the %d elements of the first array: ", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &array_1[i]);
  }

  printf("Enter the %d elements of the second array: ", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &array_2[i]);
  }

  int comparison = compare(array_1, array_2, size);

  if (comparison == 1) {
    printf("The first array has a larger sum.\n");
  } else if (comparison == 2) {
    printf("The second array has a larger sum.\n");
  } else {
    printf("Both arrays have equal sums.\n");
  }

  free(array_1);
  free(array_2);

  return 0;
}

int compare(int *a, int *b, int size) {
  int sum_of_a = 0, sum_of_b = 0, i = 0;

  for (i = 0; i < size; i++) {
    sum_of_a += a[i];
    sum_of_b += b[i];
  }

  if (sum_of_a > sum_of_b) {
    return 1;
  } else if (sum_of_b > sum_of_a) {
    return 2;
  } else {
    return 0; // return 0 if both sums are equal
  }
}
