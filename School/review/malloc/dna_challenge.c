#include <stdio.h>
#include <stdlib.h>

// The size_t data type in C is an unsigned integer
// type used to represent the size of objects in bytes. It is defined in the stddef. 
// h header and is commonly used to represent the size of arrays, memory blocks, and strings.

// Type. casting refers to changing an variable of one data type 
// into another. The compiler will automatically change one type of data into another
// if it makes sense. For instance, if you assign an integer value to a floating-point variable, 
// the compiler will convert the int to a float.

int main() {
    // Initialize variables
    size_t size = 0, batch_size = 100; // size and batch_size are used to keep track of the size of the DNA string and the batch size for reallocation
    int start, end, i; // start, end, and i are not used in this code block
    char ch; // ch is used to read characters from input

    // Allocate memory for the DNA string with initial batch size
    char *dna = (char*)malloc(sizeof(char)*batch_size);

    // Read characters from input until end of file (EOF) is reached
    while((ch = getchar()) != EOF) {
        // If the character is not a newline character, add it to the DNA string
        if (ch != '\n') {
            dna[size++] = ch;
        }
        // If the current size is a multiple of batch size minus 1, reallocate memory
        else if (size % batch_size == batch_size - 1) {
            printf("** re-allocated again (%ld) **\n", size + 1);
            dna = (char*)realloc(dna, size + batch_size);
        }
    }

    // Add null character at the end of the DNA string to terminate it
    dna[size] = '\0';

    // Print the final size of the DNA string
    printf("Size = %ld\n", size);

    // Free the allocated memory
    free(dna);

    return 0;
}