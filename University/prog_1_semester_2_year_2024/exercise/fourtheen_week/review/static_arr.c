#include <stdio.h>

int *get_array();

int main() {
  int *p, i = 0;

  p = get_array();

  for (i = 0; i < 5; i++) {
    printf("%d\n", p[i]);
  }

  return 0;
}

int *get_array() {
  static int b[] = {3, 4, 5, 6, 7};
  return b;
}
