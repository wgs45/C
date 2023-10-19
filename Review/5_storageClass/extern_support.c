#include <stdio.h>

// Get count variable from extern_main
extern int count;

void write_extern(void) {
    printf("count = %d\n", count);
}