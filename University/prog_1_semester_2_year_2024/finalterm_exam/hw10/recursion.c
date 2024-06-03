#include <stdio.h>

// find recursion

void recursion(int n);

int main() {
  int n = 5;

  recursion(n);
  printf("\n");

  return 0;
}

void recursion(int n) {
  if (n > 0) {
    recursion(n - 1);
    printf("%d ", n);
  }
}
