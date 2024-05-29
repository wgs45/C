#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b);
void permutate(char *str, int left, int right);

int main() {
  int len = 0;

  // Prompt user to enter the length of the string
  printf("Input len: ");
  if (scanf("%d", &len) != 1 || len <= 0) {
    printf("Invalid length.\n");
    return 1;
  }

  // Allocate memory for the input string dynamically
  char *input = (char *)malloc((len + 1) * sizeof(char));
  if (input == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  // Prompt user to enter the string
  printf("Input string: ");
  scanf("%s", input);

  // Ensure the entered string length matches the expected length
  if (strlen(input) != len) {
    printf("String length does not match the specified length.\n");
    free(input);
    return 1;
  }

  // Generate permutations
  permutate(input, 0, len - 1);
  printf("\n");

  // Free allocated memory
  free(input);
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

  for (int i = left; i <= right; i++) {
    swap(&str[left], &str[i]);
    permutate(str, left + 1, right);
    swap(&str[left], &str[i]);  // backtrack
  }
}
