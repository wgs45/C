#include <stdio.h>
#include <stdlib.h>

typedef struct car {
  int x, y;
  float speed, direction;
} c, *car_array;

int main() {
  int n = 10, i = 0;

  car_array c = (car_array)malloc(n * sizeof(c));
  for (i = 0; i < 10; i++) {
    c[i].x = i * 10;
    printf("%d\n", c[i].x);
  }

  return 0;
}
