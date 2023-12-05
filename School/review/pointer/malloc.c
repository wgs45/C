#include <string.h>
#include <stdlib.h>

// Function prototype for duplicating a string
char *duplicate(const char *p);

int main() {
    // Original string
    const char *original = "Hello, world!";

    // Duplicate the original string
    char *duplicate_str = duplicate(original);

    // Use the duplicated string as needed

    // Free the memory allocated for the duplicated string
    free(duplicate_str);

    // Return 0 to indicate successful execution
    return 0;
}

char *duplicate(const char *p) {
    // Allocate memory for the duplicate string
    char *q = (char *)malloc(strlen(p) + 1);

    // Check if memory allocation was successful
    if (q != NULL) {
        // Copy the contents of the source string to the destination string
        strcpy(q, p);
    }

    // Return the duplicate string
    return q;
}