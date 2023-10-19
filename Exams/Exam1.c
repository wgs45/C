#include <stdio.h>
int main() {
    char str[1000], rev[1000];
    int x, y, count = 0;

    // input
    printf("Enter a character: ");
    scanf("%s", str);
    printf("character entered: %s\n", str);

    //find the length of the string
    while (str[count] != '\0')
    {
        count++;
        printf("count: %d\n", count);
    }
    x = count - 1;
    printf("x: %d\n", x);

    // swapp
    for (y = 0; y < count; y++)
    {
        rev[y] = str[x];
        printf("rev[y]: %s\n", rev);
        printf("str[x]: %s\n", str);
        x--;
        printf("x: %d\n", x);
    }

    printf("result: %s\n", rev);
}