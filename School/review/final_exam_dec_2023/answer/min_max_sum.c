#include <stdio.h>

void avg_sum(double arr[], int size, double *min, double *max, double *sum);

int main() {
  double arr[] = {1.5, 2.5, 3.5, 4.5, 5.5};

  int size = sizeof(arr) / sizeof(arr[0]);

  double min, max, sum;

  avg_sum(arr, size, &min, &max, &sum);

  printf("min: %f\n", min);
  printf("max: %f\n", max);
  printf("sum: %f\n", sum);

  if (size > 0) {
    double average = sum / size;
    printf("average: %f\n", average);
  } else {
    printf("Invalid value");
  }

  return 0;
}

void avg_sum(double arr[], int size, double *min, double *max, double *sum) {
  int i;

  if (size <= 0) { 
    *min = *max = *sum = 0.0;

    return;
  }

  *min = *max = *sum = arr[0];

  for (i = 1; i < size; i++) {
    if (arr[i] < *min) {
      *min = arr[i];
    }

    if (arr[i] > *max) {
      *max = arr[i];
    }
  }

  *sum += arr[i];

}
