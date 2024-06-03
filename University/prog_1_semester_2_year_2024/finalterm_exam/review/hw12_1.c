#include <stdio.h>

void swap(char *a, char *b);
void permutate(char *str, int left, int right);

int main() {
  int size = 0;

  printf("Enter size: ");
  if (scanf("%d", &size) != 1 || size <= 0) {
    printf("Invalid value\n");
    return 1;
  }

  char str[size + 1];
  printf("Enter a character: ");
  scanf("%s", str);

  permutate(str, 0, size - 1);
  printf("\n");

  return 0;
}

void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void permutate(char *str, int left, int right) {
  if (left == right) {
    printf("%s ", str);
    return;
  }

  int i = 0;
  for (i = left; i <= right; i++) {
    swap(&str[left], &str[i]);
    permutate(str, left + 1, right);
    swap(&str[left], &str[i]);
  }
}
