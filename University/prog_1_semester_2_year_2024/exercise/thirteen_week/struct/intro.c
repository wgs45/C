#include <stdio.h>

struct car {
  int x, y;
  float speed, direction;
};

int main() {
  struct car c[10];
  int i = 0;

  for (i = 0; i < 10; i++) {
    c[i].x = 10 * i;
    c[i].y = 20 * i;
    printf("Position of car #%d: (%d, %d)\n", i, c[i].x, c[i].y);
  }

  printf("hello world\n");

  return 0;
}
