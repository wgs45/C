#include <stdio.h>

// recursive function to calculate a^b where b is negative
double power(int a, int b);

int main() {
  int base = 0, exponent = 0;

  printf("Enter base and exponent (seperated with whitespace): ");
  scanf("%d %d", &base, &exponent);

  double result = power(base, exponent);
  printf("%d^%d = %f\n", base, exponent, result);

  return 0;
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
