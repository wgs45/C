#include <stdio.h>

void hanoi(int n, char start, char end, char temp);

int main() {
  hanoi(3, 'A', 'C', 'B');

  return 0;
}

void hanoi(int n, char start, char end, char temp) {
  if (n >= 1) {
    hanoi(n - 1, start, temp, end);
    printf("%d %c -> %c\n", n, start, end);
    hanoi(n - 1, temp, end, start);
  }
}
