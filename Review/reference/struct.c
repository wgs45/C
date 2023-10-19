#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ex1 {
    size_t foo;
    int flex[];
};

struct ex2_header {
    int foo;
    char bar;
};

struct ex2 {
    struct ex2_header header;
    int flex[];
};

// Merged ex2_header and ex2 structures
struct ex3 {
    int foo;
    char bar;
    int flex[];
};

int main() {
    // prints 8,8 on terminal, so there is no padding
    printf("%zu %zu\n", sizeof(size_t), sizeof(struct ex1));

    // prints 8,8 in terminal, so there is no padding in ex2_structure itself
    printf("%zu %zu\n", sizeof(struct ex2_header), sizeof(struct ex2));

    // prints 5,8 in terminal, so there are 3 bytes of padding
    printf("%zu %zu\n", sizeof(int) + sizeof(char), sizeof(struct ex3));


    return 0;
};

