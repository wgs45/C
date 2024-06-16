#include <stdio.h>

int factor_n(int n);

int main() {
  int n = 0, result = 0;

  printf("Enter value: ");
  scanf("%d", &n);

  result = factor_n(n);
  printf("Result: %d\n", result);

  return 0;
}

int factor_n(int n) {
  if (n != 0) {
    return n + factor_n(n - 1);
  } else {
    return n;
  }
}
