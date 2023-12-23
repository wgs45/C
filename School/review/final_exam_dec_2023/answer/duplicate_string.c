#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

// func prototype
char *duplicate(const char *string);

int main() {
  const char *string = "hello, world 123!";

  char *result = duplicate(string);

  printf("Original string: %s\n", string);
  printf("duplicate string: %s\n", result);
  

  return 0;
}

char *duplicate(const char *string) {
  static char q[MAX_LEN];

  strcpy(q, string);

  return q;
}
