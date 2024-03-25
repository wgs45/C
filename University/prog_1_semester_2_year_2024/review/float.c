#include <stdio.h>

// program to convert celcius to faranheit

float c2f(int input);

int main() {
    int input = 101;

    float convert = c2f(input);

    printf("%dC is %fF\n", input, convert);

    return 0;
}

float c2f(int input) {
    float result = input * 9 / 5 + 32;
    return result;
}
