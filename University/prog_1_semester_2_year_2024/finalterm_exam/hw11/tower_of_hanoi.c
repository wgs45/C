#include <stdio.h>

void tower_of_hanoi(int n, char start, char end, char temp);

int main() {
  int n = 3;

  tower_of_hanoi(n, 'A', 'B', 'C');

  return 0;
}

void tower_of_hanoi(int n, char start, char end, char temp) {
  if (n == 1) {
    printf("Move disk 1 from %c to %c.\n", start, end);
    return;
  }

  tower_of_hanoi(n - 1, start, end, temp);
  printf("Move disk %d from %c to %c.\n", n, start, end);
  tower_of_hanoi(n - 1, temp, end, start);
}
