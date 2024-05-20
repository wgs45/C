#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// generate_random_array
int *generate_random_array(int size);

// recursive function to calculate a^b where b is negative
double power(int a, int b);

// compare sum of two arrays
int compare(int *a, int *b, int size);

int main() {
  srand(time(0));
  int size = 10, i = 0;
  int *array = generate_random_array(size);

  printf("Random array: ");
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  // calculate power using recursive
  int base = 4, exponent = -2;
  double result = power(base, exponent);
  printf("%d^%d = %f\n", base, exponent, result);

  // comparing 2 arrays
  int n = 0;
  printf("Enter the number of elements in each array(n): ");
  scanf("%d", &n);

  int *array_1 = (int *)malloc(size * sizeof(int));
  int *array_2 = (int *)malloc(size * sizeof(int));

  printf("Enter the element of first array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &array_1[i]);
  }

  printf("Enter the element of second array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &array_2[i]);
  }

  int compares = compare(array_1, array_2, n);
  if (compares == 1) {
    printf("The first array has larger sum.\n");
  } else if (compares == 2) {
    printf("The second array has larger sum.\n");
  } else {
    printf("Both arrays are equal.\n");
  }

  free(array);
  free(array_1);
  free(array_2);

  return 0;
}

int *generate_random_array(int size) {
  int i = 0;

  int *array = (int *)malloc(size * sizeof(int));
  for (i = 0; i < size; i++) {
    array[i] = rand() % 100;
  }
  return array;
}

double power(int a, int b) {
  if (b == 0) {
    return 1;
  } else if (b < 0) {
    return 1.0;
  } else {
    return a * power(a, b - 1);
  }
}

int compare(int *a, int *b, int size) {
  int sum_of_a = 0, sum_of_b = 0, i = 0;

  for (i = 0; i < size; i++) {
    sum_of_a += a[i];
    sum_of_b += b[i];
  }

  if (sum_of_a > sum_of_b) {
    return 1;
  } else if (sum_of_b > sum_of_a) {
    return 2;
  } else {
    return 0; // return 0 if both sum are equal
  }
}
