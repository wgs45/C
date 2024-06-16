#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct to store characters, frequency, and first occurrence index
typedef struct {
  char character;
  int frequency;
  int index;
} CharFreq;

void count_frequency(char *str, CharFreq *char_freq);
int compare(const void *a, const void *b);

int main() {
  int len = 0;
  char str[1000];

  printf("Enter length and string value (separated with whitespace): ");
  if (scanf("%d %s", &len, str) != 2) {
    printf("Invalid input\n");
    return 1;
  }

  // Allocate memory
  char *string = (char *)malloc((strlen(str) + 1) * sizeof(char));
  if (string == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  strcpy(string, str);

  // Array to store characters, frequency, and index
  CharFreq char_freq[256] = {0}; // Initialize array to zero

  // Count character frequency and their first occurrences index
  count_frequency(string, char_freq);

  // Sort characters by frequency, then by their first occurrences
  qsort(char_freq, 256, sizeof(CharFreq), compare);

  // Generate output string with unique characters (no repeating characters)
  char result[100] = {0};
  int position = 0, i = 0;

  for (i = 0; i < 256 && position < len; i++) {
    if (char_freq[i].frequency > 0) {
      result[position++] = char_freq[i].character;
    }
  }

  // NULL terminate the result string
  result[position] = '\0';

  printf("Result: %s\n", result);
  free(string);

  return 0;
}

// Count frequency of characters and its first occurrence index
void count_frequency(char *str, CharFreq *char_freq) {
  int i = 0;
  int len = strlen(str);

  for (i = 0; i < 256; i++) {
    char_freq[i].character = (char)i;
    char_freq[i].frequency = 0;
    char_freq[i].index = len; // set default index value to a large value
  }

  for (i = 0; i < len; i++) {
    unsigned char c = (unsigned char)str[i];
    char_freq[c].character = c;
    char_freq[c].frequency++;
    if (char_freq[c].frequency == 1) {
      char_freq[c].index = i;
    }
  }
}

// Custom comparator for sorting first by frequency then by the first
// occurrences
int compare(const void *a, const void *b) {
  CharFreq *cf_1 = (CharFreq *)a;
  CharFreq *cf_2 = (CharFreq *)b;

  if (cf_2->frequency != cf_1->frequency) {
    return cf_2->frequency - cf_1->frequency;
  } else {
    return cf_1->index - cf_2->index;
  }
}
