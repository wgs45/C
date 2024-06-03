#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b, int size);

int main() {
  int size = 0, i = 0;

  printf("Enter size: ");
  scanf("%d", &size);

  int *arr_1 = (int *)malloc(size * sizeof(int));
  int *arr_2 = (int *)malloc(size * sizeof(int));

  printf("Input A elements: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr_1[i]);
  }

  printf("Input B elements: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr_2[i]);
  }

  int comparation = compare(arr_1, arr_2, size);
  if (comparation == 1) {
    printf("A\n");
  } else if (comparation == 2) {
    printf("B\n");
  } else {
    printf("Both are equal\n");
  }

  free(arr_1);
  free(arr_2);

  return 0;
}

int compare(int *a, int *b, int size) {
  int sum_of_a = 0, sum_of_b = 0;
  int i = 0;

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
