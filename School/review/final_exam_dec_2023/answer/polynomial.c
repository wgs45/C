#include <stdio.h>

// c program to find polynomial using horners rule

int horners_rule(int coef[], int start, int degree, int x);

int main() {
  int coef[] = {-1, -2, 3, -4, -5}, start = 0, degree = 4, x = 2;

  int result = horners_rule(coef, start, degree, x);

  printf("result: %d\n", result);

  return 0;
}

int horners_rule(int coef[], int start, int degree, int x) {
  if (start == degree) {
    return coef[degree];
  } else {
    return coef[start] + x * horners_rule(coef, start + 1, degree, x);
  }
}
