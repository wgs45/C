#include <stdio.h>

// Donald Knuth TeX language convertion program in c
// example input: "tob be or not to be"
// example output: ``tob be or not to be''

int main() {
    int flag = 0;
    char a = '\0'; // '\0' is a null character

    while(scanf("%c", &a) != EOF) {
        if (a == '"' && flag == 0) {
            flag = 1;
            printf("``");
        } else if (a == '"' && flag == 1) {
            flag = 0;
            printf("''");
        } else {
            printf("%c", a);
        }
    }

    return 0;
}