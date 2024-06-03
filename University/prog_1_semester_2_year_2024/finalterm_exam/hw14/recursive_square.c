#include <stdio.h>

// Function prototype declaration
float power_n(int a, int b);

int main() {
  // Calling the power_n function with base 4 and exponent -2
  float ans = power_n(4, -2);

  // Printing the result
  printf("%f\n", ans);

  return 0; // End of the main function
}

// Function to calculate the power of 'a' raised to 'b'
float power_n(int a, int b) {
  // Base case: any number to the power of 0 is 1
  if (b == 0) {
    return 1.0;
  }
  // Recursive case for positive powers
  else if (b > 0) {
    return a * power_n(a, b - 1); // Multiply 'a' by the result of 'a' raised to
                                  // the power of 'b-1'
  }
  // Recursive case for negative powers
  else {
    return 1.0 / power_n(a, -b); // Reciprocal of the positive power
  }
}
