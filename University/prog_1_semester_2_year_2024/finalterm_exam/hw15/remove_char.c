#include <stdio.h>
#include <string.h>

int main() {
  char input[1000];
  char *substring;

  printf("Enter word: ");
  fgets(input, sizeof(input), stdin);

  input[strcspn(input, "\n")] = 0;

  substring = strstr(input, "HA");
  if (substring != NULL) {
    substring += 2;
    printf("Output: %s\n", substring);
  } else {
    printf("Invalid value\n");
  }

  return 0;
}
