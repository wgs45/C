#include <stdio.h>

int previous_two_product(int n);

int main() {
  int n = 0;

  printf("Input value: ");
  scanf("%d", &n);

  printf("Result: %d\n", previous_two_product(n));

  return 0;
}

int previous_two_product(int n) {
  if (n == 1) {
    return 1;
  } else if (n == 2) {
    return 2;
  } else if (n > 2) {
    return previous_two_product(n - 1) * previous_two_product(n - 2);
  } else {
    return n;
  }
}
