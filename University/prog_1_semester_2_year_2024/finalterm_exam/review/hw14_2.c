#include <stdio.h>

float power_n(int a, int b);

int main() {
  int a = 0, b = 0;

  printf("Enter value of a and b (seperated with space): ");
  scanf("%d %d", &a, &b);

  float result = power_n(a, b);
  printf("Result: %f\n", result);

  return 0;
}

float power_n(int a, int b) {
  if (b == 0) {
    return 1.0;
  } else if (b > 0) {
    return a * power_n(a, b - 1);
  } else {
    return 1.0 / power_n(a, -b);
  }
}
