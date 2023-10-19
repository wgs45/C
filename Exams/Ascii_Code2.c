#include <stdio.h>

int main() {
    char str[1000] = "hello";
    int i, x, count = 0;

    // printf("Ascii value of %c is %d\n", str, str);

    while (str[count] != '\0') {
        count++;
    }
    i = count - 1;

    for (i = 0; i < count; i++) {
        printf("Ascii value of %c is %d\n", str[i], str[i]);
    }

    

    char a = 'a';
    a = a + 3;

    return 0;
}