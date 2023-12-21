#include <stdio.h>

// func prototype
int fibonnaci(int num);

int main() {
  int num;

  scanf("%d", &num);

  printf("%d", fibonnaci(num));

  return 0;
}

int fibonnaci(int num) {
  if (num <= 0 || num == 1) {
    return num;
  } else {
    return fibonnaci(num - 1) + fibonnaci(num - 2);
  }
}
