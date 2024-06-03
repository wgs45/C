#include <math.h>
#include <stdio.h>
#include <string.h>

void tobinary(int x, char *str) {
  int i = 0;
  while (x != 0) {
    if (x % 2 == 1) {
      printf("%c", str[i]);
    }
    x /= 2;
    i++;
  }
}

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  int len = strlen(str);
  int n = pow(2, len);
  printf("Null");
  int i;
  for (i = 0; i < n; i++) {
    tobinary(i, str);
    printf("\n");
  }
  return 0;
}
