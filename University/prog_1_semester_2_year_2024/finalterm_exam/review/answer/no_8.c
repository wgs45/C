#include <stdio.h>
#include <string.h>

void remove_commas(char *str);

int main() {
  char str[100] = {0};

  printf("Enter a string with commas: ");
  scanf("%s", str);

  remove_commas(str);
  printf("Result: %s\n", str);

  return 0;
}

void remove_commas(char *str) {
  int len = strlen(str), i = 0;

  for (i = 0; i < len; i++) {
    if (str[i] == ',') {
      str[i] = ' ';
    }
  }
}
