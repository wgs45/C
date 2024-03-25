#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int isEqual = 1;  // keep tracks of the equal string
    int i = 0;

    printf("Enter the first string then the second string (Seperated with space): ");
    scanf("%s %s", str1, str2);

    // Compare characters of both strings
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0;  // Set flag to 0 if characters are not equal
            break;
        }
        i++;
    }

    // Check if strings are equal
    if (isEqual && str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
