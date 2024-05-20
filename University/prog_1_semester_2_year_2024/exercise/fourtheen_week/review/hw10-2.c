#include <stdio.h>

// recursion
int add(int n);

int main() {
  int n = 0, sum = 0;

  printf("Enter value for (n): ");
  scanf("%d", &n);

  if (n > 0) {
    sum = add(n);
  }

  printf("Result: %d\n", sum);

  return 0;
}

int add(int n) {
  if (n == 1) {
    return 1;
  } else {
    return add(n - 1) + n;
  }
}
