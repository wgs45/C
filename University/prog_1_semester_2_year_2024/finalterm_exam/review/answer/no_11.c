#include <stdio.h>

void swap(char *a, char *b);
void permutate(char *str, int left, int right);

int main() {
  int len = 0;

  printf("Enter size and string (seperated with whitespace): ");
  if (scanf("%d", &len) != 1 || len <= 0) {
    printf("Invalid values\n");
    return 1;
  }

  char str[len + 1];
  scanf("%s", str);

  permutate(str, 0, len - 1);
  printf("\n");

  return 0;
}

void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void permutate(char *str, int left, int right) {
  int i = 0;

  if (right == left) {
    printf("%s ", str);
    return;
  }

  for (i = left; i <= right; i++) {
    swap(&str[left], &str[i]);
    permutate(str, left + 1, right);
    swap(&str[left], &str[i]);
  }
}
