#include <stdio.h>
#include <string.h>

void extract_between_markers(char *str);

int main() {
  char str[100] = {0};

  printf("Input string: ");
  scanf("%s", str);

  printf("Output: ");
  extract_between_markers(str);

  return 0;
}

void extract_between_markers(char *str) {
  char *start = strstr(str, "[st]");
  char *end = strstr(str, "[ed]");

  if (start != NULL || end != NULL && start < end) {
    // Move the start pointer to the character after "[st]"
    start += 4;

    // Calculate the len of the substring
    int len = end - start;

    // Allocate memory for the substring
    char result[len + 1];

    // Copy the substring into the result array
    strncpy(result, start, len);

    // NULL terminate the result string
    result[len] = '\0';
    printf("%s\n", result);
  } else {
    printf("Markers not found or in incorrect order\n");
  }
}
