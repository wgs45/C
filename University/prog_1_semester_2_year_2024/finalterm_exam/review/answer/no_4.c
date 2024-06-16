#include <stdio.h>

void power_calc(int a, int b, double *result);

int main() {
  int a = 0, b = 0;
  double result = 1.0;

  printf("Enter a & b value (seperated with whitespace): ");
  scanf("%d %d", &a, &b);

  power_calc(a, b, &result);
  printf("Result: %.4f\n", result);

  return 0;
}

void power_calc(int a, int b, double *result) {
  if (b == 0) {
    return;
  } else if (b > 0) {
    *result *= a;
    power_calc(a, b - 1, result);
  } else {
    *result /= a;
    power_calc(a, b + 1, result);
  }
}
