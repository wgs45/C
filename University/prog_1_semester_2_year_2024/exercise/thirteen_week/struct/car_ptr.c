#include <stdio.h>

struct car {
  int x, y;
  float speed, direction;
};

int main() {
  // calling car using "c", similar to using aliases in a config files
  struct car c;

  c.x = 10;
  c.y = 20;

  struct car *ptr;
  ptr = &c;

  printf("The position of car (%d, %d)\n", (*ptr).x, (*ptr).y);

  return 0;
}
