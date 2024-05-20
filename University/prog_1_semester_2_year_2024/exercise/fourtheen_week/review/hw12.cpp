#include <stdio.h>
#define N 4

void show_permutation(int *arr);
void permutation(int *arr, int i);

int main() {
  int arr[N] = {9, 8, 6, 5};

  permutation(arr, 0);

  return 0;
}

void show_permutation(int *arr) {
  int i = 0;

  for (i = 0; i < N; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");
}

void permuatation(int *arr, int i) {
  int j = 0, k = 0, temp = 0;

  if (i < N) {
    for (j = i; j < N; j++) {
      temp = arr[i];
      for (k = j; k > i; k--) {
        arr[k] = arr[k - 1];
      }
      arr[i] = temp;

      permuatation(arr, i + 1);

      for (k = i; k < j; k++) {
        arr[k] = arr[k + 1];
      }
      arr[i] = temp;
    }
  } else {
    show_permutation(arr);
  }
}
