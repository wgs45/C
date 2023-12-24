#include <stdio.h>

void find_two_largest(int arr[], int size, int *largest, int *second_largest);

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  int largest, second_largest;

  int size = sizeof(arr) / sizeof(arr[0]);

  find_two_largest(arr, size, &largest, &second_largest);

  printf("largest: %d\n", largest);
  printf("second_largest: %d\n", second_largest);

  return 0;
}

void find_two_largest(int arr[], int size, int *largest, int *second_largest) {
  int i;

  *largest = *second_largest = arr[0];

  for (i = 1; i < size; i++) {
    if (arr[i] > *largest) {
      *second_largest = *largest;
      *largest = arr[i];
    } else if (arr[i] > *second_largest && arr[i] != *largest) {
      *second_largest = arr[i];
    }
  }

}
