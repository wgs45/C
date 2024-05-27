#include <stdio.h>

float power_n(int a, int b);

int main() {
  float ans = power_n(4, 4);

  printf("%f\n", ans);

  return 0;
}

float power_n(int a, int b) {
  if (b == 0) {
    return 1.0; // Any number to the power of 0 is 1
  } else if (b > 0) {
    return a * power_n(a, b - 1); // Positive powers: multiply 'a'
  } else {
    return 1.0 /
           power_n(a, -b); // Negative powers: reciprocal of positive power
  }
}
