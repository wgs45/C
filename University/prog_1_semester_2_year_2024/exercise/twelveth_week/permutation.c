#include <stdio.h>

void swap(char *a, char *b);
void permutate(char *str, int left, int right);

int main() {
  int len = 0;

  printf("Enter len: ");
  if (scanf("%d", &len) != 1 || len <= 0) {
    printf("Invalid value\n");
    return 1;
  }

  // Declare a character array to hold the input string
  char str[len + 1];
  printf("Enter character: ");
  scanf("%s", str);

  permutate(str, 0, len - 1);
  printf("\n");

  return 0;
}

void swap(char *a, char *b) {
  char temp = *a;  // Use char instead of int for the temporary variable
  *a = *b;
  *b = temp;
}

void permutate(char *str, int left, int right) {
  int i = 0;

  // Base case: if left index is equal to right index, print the current permutation
  if (right == left) {
    printf("%s ", str);
    return;
  }

  // Recursive case: generate permutations by swapping each character with the current position
  for (i = left; i <= right; i++) {
    // Swap the current character with the character at position left
    swap(&str[left], &str[i]);
    // Recursively generate permutations for the remaining characters
    permutate(str, left + 1, right);
    // Backtrack by swapping the characters back to their original positions
    swap(&str[left], &str[i]);
  }
}
