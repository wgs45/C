#include <stdio.h>

// * Define a global variable
// #define LENGHT 10
// #define WIDTH 5
// #define NEWLINE '\n'

int main() {
    const int LENGHT = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;

    area = LENGHT * WIDTH;
    printf("Value of area: %d cm", area);
    printf("%c", NEWLINE);
}