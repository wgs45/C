#include <stdio.h>
#include <stdlib.h>

int compare_arr(int *a, int *b);

int main() {
  int i = 0, n = 5;

  int *arr = (int *)malloc(2 * n * sizeof(int));
  int *a1 = (int *)malloc(n * sizeof(int));
  int *a2 = (int *)malloc(n * sizeof(int));

  for (i = 0; i < 2 * n; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }

  for (i = 0; i < n; i++) {
    a1[i] = arr[i]; // copy first half to a1
  }

  for (i = 0; i < n; i++) {
    a2[i] = arr[i + n]; // copy second half to a1
  }

  printf("%d\n", compare_arr(a1, a2));

  free(arr);
  free(a1);
  free(a2);

  return 0;
}

int compare_arr(int *a, int *b) {
  int sum_1 = 0, sum_2 = 0, i = 0, n = 5;

  for (i = 0; i < n; i++) {
    sum_1 += a[i];
  }

  for (i = 0; i < n; i++) {
    sum_2 += b[i];
  }

  if (sum_1 > sum_2) {
    return 1;
  } else {
    return 2;
  }
}
