#include <stdio.h>

// func prototype
int gcd(int x, int y);

int main() {
  int x, y;
  
  scanf("%d %d", &x, &y);

  printf("GCD: %d\n", gcd(x, y));

  return 0;
}

int gcd(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return gcd(y, x % y);
  }
}
