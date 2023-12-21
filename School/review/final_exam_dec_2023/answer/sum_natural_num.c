#include <stdio.h>

// func prototype
int sum(int num);

int main() {
  int input, result;

  // input number
  scanf("%d", &input);

  result = sum(input);

  printf("result: %d", result);

  return 0;
}

int sum(int num) {
  if (num != 0) {
    return num + sum(num - 1);
  } else {
    return num;
  }
}
