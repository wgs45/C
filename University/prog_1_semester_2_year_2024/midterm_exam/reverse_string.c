#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], reversed[1000];

    printf("Enter a number: ");
    scanf("%s", str);

    int len = strlen(str), i = 0, j = 0;

    for (i = len - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    
    // end of number
    reversed[j] = '\0';

    printf("Reversed: %s\n", reversed);

    return 0;
}
