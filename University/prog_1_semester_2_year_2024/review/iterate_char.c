#include <stdio.h> 

int main() {
    char str[] = "hello world";
    int i;

    int str_len = sizeof(str) / sizeof(str[0]);

    for (i = 0; i < str_len; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
