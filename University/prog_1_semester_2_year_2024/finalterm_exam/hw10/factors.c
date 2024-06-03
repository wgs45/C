#include <stdio.h>

int factor(int n);

int main() {
  int n = 5;

  int result = factor(n);

  printf("%d\n", result);

  return 0;
}

int factor(int n) {
  if (n != 0) {
    return n + factor(n - 1);
  } else {
    return n;
  }
}
