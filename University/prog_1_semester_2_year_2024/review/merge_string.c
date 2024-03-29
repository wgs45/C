#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    // input string
    printf("Enter the first string then the second string(Seperated with space): ");
    scanf("%s %s", str1, str2);

    // Copy characters from str1 to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copy characters from str2 to result
    while (str2[j] != '\0') {
        result[i + j] = str2[j];
        j++;
    }

    // Null are used to terminate the result string
    result[i + j] = '\0';
    printf("Merged string: %s\n", result);

    return 0;
}
