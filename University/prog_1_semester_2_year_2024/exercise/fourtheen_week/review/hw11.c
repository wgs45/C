#include <stdio.h>

// tower of hanoi game
void hanoi(char start, char end, char temp, int n);

int main() {
  hanoi('A', 'B', 'C', 3);

  return 0;
}

void hanoi(char start, char end, char temp, int n) {
  if (n >= 1) {
    // first step
    hanoi(start, temp, end, n - 1);
    // second step
    printf("%d %c -> %c\n", n, start, end);
    // third step
    hanoi(temp, end, start, n - 1);
  }
}
