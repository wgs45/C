#include <stdio.h>

int main() {
    char input;

    while(input != EOF) {
        scanf("%c", &input);
        printf("%c", input);
    }

    return 0;
}