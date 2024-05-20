#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rearrange(char *str);

int main() {
  int size = 0;

  printf("Enter a number, followed by a string: ");

  if (scanf("%d", &size) != 1 || size <= 0) {
    printf("Invalid input size.\n");
    return 1;
  }

  // Allocate memory for the string
  char *str = malloc((size + 1) * sizeof(char));
  if (str == NULL) {
    printf("Memory allocation failed.\n");
    return 1; // Exit with error
  }

  scanf("%s", str);

  rearrange(str);

  printf("Result: %s\n", str);

  free(str);

  return 0;
}

// Function to rearrange characters in the string based on frequency
void rearrange(char *str) {
  // Array to store frequency of characters
  int freq[256] = {0};
  int len = strlen(str);

  // Count frequency of characters
  for (int i = 0; i < len; i++) {
    freq[(unsigned char)str[i]]++; // cast to unsigned char to handle negative
                                   // ASCII values
  }

  // Find the maximum frequency
  int maxFreq = 0;
  for (int i = 0; i < 256; i++) {
    if (freq[i] > maxFreq) {
      maxFreq = freq[i];
    }
  }

  // Rearrange characters based on frequency, then alphabetically
  int index = 0;
  for (int i = maxFreq; i > 0; i--) {
    for (int j = 0; j < 256; j++) {
      if (freq[j] == i) {
        str[index++] = j;
      }
    }
  }

  // Add null terminator at the end
  str[index] = '\0';
}
