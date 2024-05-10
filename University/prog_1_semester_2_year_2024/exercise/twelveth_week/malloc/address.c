#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "123456";

    // memset() => used to fill a block of memory with a particular value.
    memset(a, '0', 3);

    printf("%s\n", a);

    char b[] = "start...end";
    memset(b + 5, '0', 4);

    printf("%s\n", b);

    return 0;
}


