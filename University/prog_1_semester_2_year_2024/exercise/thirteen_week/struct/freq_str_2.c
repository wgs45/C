#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rearrange(char *str);

int main() {
  int size = 0;

  // Prompt the user to enter the size of the string
  printf("Enter a number, followed by a string: ");

  // Validate the size input
  if (scanf("%d", &size) != 1 || size <= 0) {
    printf("Invalid input size.\n");
    return 1;
  }

  // Allocate memory for the string including space for the null terminator
  char *str = malloc((size + 1) * sizeof(char));
  if (str == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  // Read the string input
  scanf("%s", str);

  // Rearrange the string based on character frequency
  rearrange(str);

  // Print the rearranged string
  printf("Result: %s\n", str);

  // Free the allocated memory
  free(str);

  return 0;
}

// Function to rearrange characters in the string based on frequency
void rearrange(char *str) {
  int freq[256] = {0}; // Array to store the frequency of each character
  int len = strlen(str);

  // Count the frequency of each character in the string
  for (int i = 0; i < len; i++) {
    freq[(unsigned char)str[i]]++;
  }

  // Find the maximum frequency of any character
  int maxFreq = 0;
  for (int i = 0; i < 256; i++) {
    if (freq[i] > maxFreq) {
      maxFreq = freq[i];
    }
  }

  // Rearrange characters in the string based on frequency and alphabetical order
  int index = 0;
  for (int i = maxFreq; i > 0; i--) {
    for (int j = 0; j < 256; j++) {
      if (freq[j] == i) {
        for (int k = 0; k < i; k++) {
          str[index++] = (char)j;
        }
      }
    }
  }

  // Add null terminator at the end of the string
  str[index] = '\0';
}
