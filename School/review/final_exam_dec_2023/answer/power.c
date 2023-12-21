#include <stdio.h>

// func prototype
int power(int num, int k);

int main() {
  int num, k;

  scanf("%d %d", &num, &k);

  printf("%d^%d: %d\n", num, k, power(num, k));

  return 0;
}

int power(int num, int k) {
  if (k == 1 || k == 0) {
    return num;
  } else {
    return num * power(num, k - 1);
  }

}
