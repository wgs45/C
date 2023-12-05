#include <stdio.h>

// c program to compare two strings then print out the difference
// 2 sample input:
// hello
// heaven

// sample output:
// 2 (because the 2 index values are different)

// Function declaration
int f(const char *s, const char *t);

int main() {
    // Declare and initialize two character arrays
    const char str1[] = "hello";
    const char str2[] = "heaven";

    // Call the function f and store the result
    int result = f(str1, str2);

    // Print the result
    printf("Result: %d\n", result);

    // Return 0 to indicate successful execution
    return 0;
}

int f(const char *s, const char *t) {
    // Declare two pointers
    const char *p1, *p2;

    // Loop through each character in the first string
    for (p1 = s; *p1; p1++) {
        // Loop through each character in the second string
        for (p2 = t; *p2; p2++) {
            // If the characters are equal, break out of the inner loop
            if (*p1 == *p2)
                break;
        }

        // If the inner loop reached the end of the second string, break out of the outer loop
        if (*p2 == '\0')
            break;
    }

    // Return the difference between the current position of p1 and the start of the first string
    return p1 - s;
}
