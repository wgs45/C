#include <stdio.h>
#include <string.h>

void generate_subset(char *input, int len, int index, char *current,
                     int current_index);

int main() {
  int len = 0;
  char input[1000];

  printf("Enter length and string (seperated with whitespace): ");
  scanf("%d %s", &len, input);

  // Temporary store subset
  char temp[100];
  printf("Output: \n");
  generate_subset(input, len, 0, temp, 0);

  return 0;
}

void generate_subset(char *input, int len, int index, char *current,
                     int current_index) {
  // Check if index reach the end of the input string
  if (index == strlen(input)) {
    // If current index is 0, return NULL
    if (current_index == 0) {
      printf("NULL\n");
    } else {
      current[current_index] = '\0';
      printf("%s\n", current);
    }
    return;
  }

  // Include the current character
  current[current_index] = input[index];
  generate_subset(input, len, index + 1, current, current_index + 1);

  // Exclude the current character
  generate_subset(input, len, index + 1, current, current_index);
}
