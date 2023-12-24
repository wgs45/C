#include <stdio.h>

int seq_search(int *arr, int size, float target);

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  int size = sizeof(arr) / sizeof(arr[0]);

  float target = 3.0;

  int result = seq_search(arr, size, target);

  if (result == -1) {
    printf("%f found at index %d\n", target, result);
  } else {
    printf("%f is not found at any index\n", target);
  }

  return 0;
}

int seq_search(int *arr, int size, float target) {
  int i;

  for (i = 0; i < size; i++) {
    // convert current element to float and then compare
    if ((float)arr[i] == target) {
       return i; // return index if found
       }
  }

  return -1; // return -1 if not found
}
