#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate_random_array(int size);

int main() {
  srand(time(0));

  int size = 0, i = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int *array = generate_random_array(size);

  printf("Random array: ");
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  free(array);

  return 0;
}

int *generate_random_array(int size) {
  int i = 0;

  int *array = (int *)malloc(size * sizeof(int));
  for (i = 0; i < size; i++) {
    array[i] = rand() % 100; // generate random value between 0 and 99
  }

  return array;
}
