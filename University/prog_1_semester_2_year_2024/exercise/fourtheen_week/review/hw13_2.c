#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// find string occurences using struct method

struct cc {
  char name;
  int count;
};

int main() {
  char str[100];

  printf("Enter a word: ");
  scanf("%s", str);

  int len = strlen(str);
  struct cc *table = (struct cc *)malloc(len * sizeof(struct cc));

  int i = 0, j = 0, distinct = 0, found_at = 0;

  for (i = 0; i < len; i++) {
    found_at = -1;
    char current_char = str[i];

    for (j = 0; j < distinct; j++) {
      if (table[j].name == current_char) {
        found_at = j;
        break;
      }
    }

    if (found_at == -1) {
      table[distinct].name = current_char;
      table[distinct].count = 1;
      distinct++;
    } else {
      table[found_at].count++;
    }
  }

  for (i = 0; i < distinct; i++) {
    printf("%c ", table[i].name);
  }
  printf("\n");

  for (i = 0; i < distinct; i++) {
    printf("%d ", table[i].count);
  }
  printf("\n");

  for (j = len; j >= 1; j--) {
    for (i = 0; i < distinct; i++) {
      if (table[i].count == j) {
        printf("%c", table[i].name);
      }
    }
  }
  printf("\n");

  return 0;
}
