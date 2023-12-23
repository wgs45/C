#include <stdio.h>

// func prototype
void swap(int *first, int *second);

int main() {
  int a = 3, b = 5;

  printf("Before swap\n");
  printf("a = %d, b = %d\n", a, b);

  swap(&a, &b);

  printf("After swap\n");
  printf("a = %d, b = %d\n", a, b);

  return 0;
}

void swap(int *first, int *second) {
  int temp;

  temp = *first;
  *first = *second;
  *second = temp;
}
