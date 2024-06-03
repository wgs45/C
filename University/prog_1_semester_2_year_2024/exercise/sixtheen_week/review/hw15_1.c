#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[100];

  printf("Input words: ");
  scanf("%s", str);

  // TKUHACSIE
  char *t = strtok(str, "HA");
  // printf("%s", t);
  t = strtok(NULL, "HA");
  printf("Result: %s", t);
  printf("\n");
  return 0;
}
