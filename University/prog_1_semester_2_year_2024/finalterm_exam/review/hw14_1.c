#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int *generate_arr(int size);

int main() {
  srand(time(NULL));

  int size = rand() % 20 + 1;
  int *arr = generate_arr(size);
  int i = 0;

  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
  free(arr);

  return 0;
}

int *generate_arr(int size) {
  int i = 0;
  int *arr = (int *)malloc(size * sizeof(int));

  for (i = 0; i <= size; i++) {
    arr[i] = rand() % 40;
  }

  return arr;
}
