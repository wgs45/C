#include <stdio.h>
#include <string.h>
 
int main() {
    char str[1000];

    printf("Enter a word: ");
    scanf("%s", str);

    int result = strlen(str);
    printf("%d\n", result);
 
    return 0;
}
