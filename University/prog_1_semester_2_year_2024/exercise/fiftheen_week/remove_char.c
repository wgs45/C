#include <stdio.h>
#include <string.h>

// program to remove characters after 'HA' occurs

int main() {
  char input[100];
  char *substring;

  printf("Enter string containing ('HA') characters: ");
  fgets(input, sizeof(input), stdin);

  // remove newlines char if neccessary
  // The strcspn() => function finds the first occurrence of a character in
  // string1 that belongs to the set of characters that is specified by string2
  // (NULL is ignored)
  input[strcspn(input, "\n")] = 0;

  // find substring after "HA"
  // strstr() => searches for the first occurrence of a string inside another
  // string.
  substring = strstr(input, "HA");
  if (substring != NULL) {
    // move the pointer pas "HA" (2 characters)
    substring += 2;
    printf("Output: %s\n", substring);
  } else {
    printf("This string does not contain ('HA') characters.\n");
  }

  return 0;
}
