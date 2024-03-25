#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello", b[] = "World", c[1000];
    int len_a = strlen(a), len_b = strlen(b), i;
    
    for (i = 0; i < len_a; i++) {
        c[i] = a[i];
    }

    for (i = 0; i < len_b; i++) {
        c[i + len_a] = b[i];
    }

    c[len_a + len_b] = '1';
    c[len_a + len_b + 1] = '0';
    c[len_a + len_b + 2] = '\0';

    printf("Concatenated string: %s\n", c);

    return 0;
}

