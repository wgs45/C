#include <stdio.h>

float calculate_average(int arr[], int size);

int main() {
  int arr[5] = {0}, i = 0, size = 5;

  printf("Input array element: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  float average = calculate_average(arr, size);
  printf("Average: %.4f\n", average);

  return 0;
}

float calculate_average(int arr[], int size) {
  int sum = 0, i = 0;

  for (i = 0; i < size; i++) {
    sum += arr[i];
  }

  return (float)sum / size;
}
