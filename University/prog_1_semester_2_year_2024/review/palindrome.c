#include <stdio.h>
#include <string.h>

// check if a word is palindrome or not

int main() {
    char str[1000];
    int count = 1, left = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    int right = strlen(str) - 1;

    while(left < right) {
        if(str[left] != str[right]) {
            count = 0;
            break;
        }
        left++; right--;
    }

    printf("Result: %d\n", count);

    return 0;
}
