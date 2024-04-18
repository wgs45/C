#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100], i = 0, j = 0;

    // fgets reads the string from standard input (stdin) and stores it in str. 
    // It reads up to sizeof(str) characters to prevent buffer overflow.
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // replace comas with whitespaces and add extra spaces
    // If a comma , is found in str, it is replaced with a space ' ' in newStr, and an additional space is added.
    // If the character is not a comma, it is copied directly to newStr.
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ',') {
            result[j++] = ' ';
        } else {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Result: %s\n", result);

    return 0;
}
