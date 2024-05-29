#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int *generate_arr(int n);

int main() {
  srand(time(NULL));

  int n = rand() % 20 + 1; // generate number from 1 to 20
  int *arr = generate_arr(n);
  int i = 0;

  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  free(arr);

  return 0;
}

int *generate_arr(int n) {
  int i = 0;
  int *arr = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    arr[i] = rand() % 40;
  }

  return arr;
}
