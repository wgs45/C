#include <stdio.h>

// Maximum size for the digits array
#define MAX_DIGITS 10

// Global array to store digits
int digits[MAX_DIGITS];

// Function prototypes
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main() {
    // Example usage
    clear_digits_array();

    // Process digits and store them in the digits array
    process_digit(3, 0);
    process_digit(5, 1);
    process_digit(8, 2);

    // Print the contents of the digits array
    printf("Digits array: ");
    print_digits_array();

    return 0;
}

// Function to clear the digits array by setting all elements to 0
void clear_digits_array(void) {
    for (int i = 0; i < MAX_DIGITS; i++) {
        digits[i] = 0;
    }
}

// Function to process a digit and store it in the specified position in the digits array
void process_digit(int digit, int position) {
    // Only store the digit if the position is within the bounds of the digits array
    if (position >= 0 && position < MAX_DIGITS) {
        digits[position] = digit;
    }
}

// Function to print the contents of the digits array
void print_digits_array(void) {
    for (int i = 0; i < MAX_DIGITS; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");
}