#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(int *a, int *b, int size);

int main() {
  int size = 0, i = 0;

  printf("Enter size for both array: ");
  scanf("%d", &size);

  int *arr_1 = (int *)malloc(size * sizeof(int));
  int *arr_2 = (int *)malloc(size * sizeof(int));

  if (arr_1 == NULL || arr_2 == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Enter element value for array A: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr_1[i]);
  }

  printf("Enter element value for array B: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr_2[i]);
  }

  int result = compare(arr_1, arr_2, size);

  if (result == 1) {
    printf("Array A is greater\n");
  } else if (result == 2) {
    printf("Array B is greater\n");
  } else {
    printf("Both are equal\n");
  }

  free(arr_1);
  free(arr_2);

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
    return 0;
  }
}
