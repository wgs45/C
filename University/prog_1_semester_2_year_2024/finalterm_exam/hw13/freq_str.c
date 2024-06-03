#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rearrange(char *str);

int main() {
  int size = 0;

  printf("Enter a number follow by a string: ");

  if (scanf("%d", &size) != 1 || size <= 0) {
    printf("Invalid value\n");
    return 1;
  }

  char *str = malloc((size + 1) * sizeof(char));
  if (str == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  scanf("%s", str);
  rearrange(str);

  printf("Result: %s\n", str);
  free(str);

  return 0;
}

void rearrange(char *str) {
  int freq[256] = {0};
  int len = strlen(str);
  int i = 0, j = 0;

  for (i = 0; i < len; i++) {
    freq[(unsigned char)str[i]]++;
  }

  int max_freq = 0;
  for (i = 0; i < 256; i++) {
    if (freq[i] > max_freq) {
      max_freq = freq[i];
    }
  }

  int index = 0;
  for (i = max_freq; i > 0; i--) {
    for (j = 0; j < 256; j++) {
      if (freq[j] == i) {
        str[index++] = j;
      }
    }
  }

  str[index] = '\0';
}
