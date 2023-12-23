#include <stdio.h>
#include <string.h>

int main() {
  int i, j, not_palindrome;
  char input[] = "12345";

  int left_index = 0;
  int right_index = strlen(input) - 1;

  while(right_index > 0) {
    if (input[left_index++] != input[right_index--]) {
      not_palindrome = 1;
    } else {
      not_palindrome = 0;
    } 
  }

  if (not_palindrome == 1) {
    printf("0\n");
  } else {
    printf("1\n");
  }

  return 0;
}
