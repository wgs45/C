#include <stdio.h>

int *get_value();

int main() {
  int *p;

  // Call get_value and assign the returned pointer to p
  p = get_value();
  // Dereference the pointer p to get the value it points to and assign it to c
  int c = *p;

  printf("%d\n", c);

  return 0;
}

int *get_value() {
  // Declare a static integer b with initial value 10
  // Static means the variable retains its value between function calls
  static int b = 10;
  int *a;
  a = &b; // Assign the address of b to the pointer a
  return a;
}
