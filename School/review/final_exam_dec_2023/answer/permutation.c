#include <stdio.h>
#include <string.h>

void generate_permutation(char str[], int left, int right);

int main() {
  char str[] = "ABC";

  int len = strlen(str);

  generate_permutation(str, 0, len - 1);

  return 0;
}

void generate_permutation(char str[], int left, int right) {
  int i, temp, count = 0;

  if (left == right) {
    printf("%s\n", str);
  } else {
    for (i = left; i <= right; i++) {
      temp = str[left];
      str[left] = str[i];
      str[i] = temp;

      generate_permutation(str, left + 1, right);

      temp = str[left];
      str[left] = str[i];
      str[i] = temp;

      count++;

      printf("Total number of permtation: %d\n", count);
    }
  }
}
