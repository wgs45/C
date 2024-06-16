#include <stdio.h>
#include <stdlib.h>

int compare_arr(int *arr, int size);

int main() {
  int size = 5, i = 0;

  int *arr_1 = (int *)malloc(size * sizeof(int));

  // Error handler
  if (arr_1 == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Input array elements: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr_1[i]);
  }

  int comparation = compare_arr(arr_1, size);
  if (comparation == 1) {
    printf("Result: 1 \n");
  } else if (comparation == 2) {
    printf("Result: 2 \n");
  } else {
    printf("Both are equal \n");
  }

  return 0;
}

int compare_arr(int *arr, int size) {
  int sum_of_a = 0, sum_of_b = 0;
  int i = 0;

  for (i = 0; i < 2; i++) {
    sum_of_a += arr[i];
  }

  for (i = 3; i < size; i++) {
    sum_of_b += arr[i];
  }

  if (sum_of_a > sum_of_b) {
    return 1;
  } else if (sum_of_b > sum_of_a) {
    return 2;
  } else {
    return 0;
  }
}
