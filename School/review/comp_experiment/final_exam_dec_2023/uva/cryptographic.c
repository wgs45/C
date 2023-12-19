#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// c program to crack cryptographic

int main() {
  int use_case, i, j;
  int count[91] = {0};
  char str[1000] = {0};

  // input use_case
  if (scanf("%d", &use_case) != 1) {
    printf("Invalid value");
    return 1;
  }

  getchar();

  while(use_case--) {
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; i < strlen(str); i++) {
      if (str[i] >= 'a' && str[i] <= 'z') {
        count[str[i] - 'a' + 'A']++;
      } else {
        count[str[i]]++;
      }
    }
  }

  for (i = sizeof(str); i >= 1; i--) {
    for (j = 'A'; j <= 'Z'; j++) {
      if (count[j] == i) {
        printf("%c %d\n", j, i);
      }
    }
  }

  return 0;
}
