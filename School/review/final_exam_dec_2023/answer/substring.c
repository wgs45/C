#include <stdio.h>

// c program to check substring
// if substring is true, return 1 (true)
// else return 0 (false)

int check_substring(char *str, char *t);

int main() {
  char str_1[] = "abcde";
  char str_2[] = "cde";
  char str_3[] = "cce";

  printf("%d %d", check_substring(str_1, str_2), check_substring(str_1, str_3));

  return 0;
}

int check_substring(char *str, char *t) {
  while(*str) {
    char *str_ptr = str;
    char *t_ptr = t;

    // check if substring starting from str_ptr matches t
    while (*str_ptr && *t_ptr && *str_ptr == *t_ptr) {
      str_ptr++;
      t_ptr++;
    }

    // if t is fully matches, return 1
    if (!(*t_ptr)) {
      return 1;
    }

    // increment to move to the next characters
    str++;
  }

  return 0;
}
