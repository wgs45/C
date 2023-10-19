#include <stdio.h>

int count;

// get write_extern function from extern_support
extern void write_extern();

int main() {
    count = 5;
    write_extern();
    
    return 0;
}