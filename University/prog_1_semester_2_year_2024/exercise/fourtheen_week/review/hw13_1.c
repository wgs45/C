#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[100];

  // Prompt the user to enter a word
  printf("Enter a word: ");
  scanf("%s", str);

  int len = strlen(str); // Get the length of the input string
  char *name = (char *)malloc(
      len * sizeof(char)); // Allocate memory to store distinct characters
  int *count = (int *)malloc(
      len *
      sizeof(int)); // Allocate memory to store the frequency of each character

  int i = 0, j = 0, distinct = 0, found_at = 0;

  // Loop through each character in the input string
  for (i = 0; i < len; i++) {
    found_at = -1;              // Reset the found_at index
    char current_char = str[i]; // Get the current character

    // Check if the current character is already in the name array
    for (j = 0; j < distinct; j++) {
      if (name[j] == current_char) {
        found_at = j; // Character found at index j
        break;
      }
    }

    // If the character is not found, add it to the name array
    if (found_at == -1) {
      name[distinct] = current_char;
      count[distinct] = 1; // Initialize its count to 1
      distinct++;          // Increment the count of distinct characters
    } else {
      count[found_at]++; // If character is found, increment its count
    }
  }

  // Print the distinct characters
  for (i = 0; i < distinct; i++) {
    printf("%c ", name[i]);
  }
  printf("\n");

  // Print the characters in order of their frequency
  for (j = len; j >= 1; j--) {
    for (i = 0; i < distinct; i++) {
      if (count[i] == j) {
        printf("%c", name[i]); // Print character if its count matches j
      }
    }
  }

  return 0;
}
