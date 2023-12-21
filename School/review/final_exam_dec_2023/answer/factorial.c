#include <stdio.h>

// func prototype
int factorial(int num);

int main() {
  int num, result;

  scanf("%d", &num);

  result = factorial(num);

  printf("%d", result);

  return 0;
}

int factorial(int num) {

  if (num == 0 || num == 1) {
    return num;
  } else {
    return num * factorial(num - 1);
  }
}
