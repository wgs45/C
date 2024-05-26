#include <stdio.h>
#include <stdlib.h>

int *get_array(int n);

int main() {
  int *p, i = 0;

  p = get_array(10);

  for (i = 0; i < 10; i++) {
    printf("%d ", p[i]);
  }

  printf("\n");

  return 0;
}

int *get_array(int n) {
  int *arr = (int *)malloc(n * sizeof(int));
  int i = 0;

  for (i = 0; i < n; i++) {
    arr[i] = i + 1;
  }

  return arr;
}
