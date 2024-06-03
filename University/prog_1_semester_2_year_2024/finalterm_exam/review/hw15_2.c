#include <stdio.h>
#include <string.h>

void generate_substring(char *input, int index, char *current,
                        int current_index);

int main() {
  char input[1000];

  printf("Enter a number: ");
  scanf("%s", input);

  char temp[1000];
  printf("Output: ");
  generate_substring(input, 0, temp, 0);

  return 0;
}

void generate_substring(char *input, int index, char *current,
                        int current_index) {
  if (index == strlen(input)) {
    if (current_index == 0) {
      printf("NULL\n");
    } else {
      current[current_index] = '\0';
      printf("%s\n", current);
    }
    return;
  }

  current[current_index] = input[index];
  generate_substring(input, index + 1, current, current_index + 1);

  generate_substring(input, index + 1, current, current_index);
}
