#include <stdio.h>

int factors(int n);

int main() {
  int n = 0;

  printf("Enter a value: ");
  scanf("%d", &n);

  int result = factors(n);
  printf("Result: %d\n", factors(n));

  return 0;
}

int factors(int n) {
  if (n != 0) {
    return n + factors(n - 1);
  } else {
    return n;
  }
}
