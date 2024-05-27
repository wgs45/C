#include <stdio.h>
#include <string.h>

void print_substring(char *input);

int main() {
  char input[100];
  int i = 0, j = 0;

  printf("Enter a number: ");
  scanf("%s", input);

  int len = strlen(input);

  // check if input is a numeric string
  for (i = 0; i < len; i++) {
    if (input[i] < '0' || input[i] > '9') {
      printf("Invalid input");
      return 1;
    }
  }

  printf("Output: ");
  print_substring(input);
  putchar('\n');

  return 0;
}

void print_substring(char *input) {
  int len = strlen(input);
  int i = 0, j = 0, k = 0;

  // iterate over all possible start position
  for (i = 0; i < len; i++) {
    // iterate over all possible end position
    for (j = i; j < len; j++) {
      // print substring from i to j
      for (k = i; k <= j; k++) {
        putchar(input[k]);
      }
      putchar(' ');
    }
  }
}
