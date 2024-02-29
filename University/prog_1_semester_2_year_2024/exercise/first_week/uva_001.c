// question from zerojudge
// question number a001

#include <stdio.h>
#include <string.h>

int main() {
    char word[100] = ""; // initialize array with an empty string
    char input[100];

    scanf(" %s", input);

    strcat(word, "hello, ");
    strcat(word, input);

    printf("%s\n", word);

    return 0;
}