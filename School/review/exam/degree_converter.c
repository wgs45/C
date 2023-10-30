#include <stdio.h>

// ! function prototypes
float fahrenheit_to_celsius(float deg);

int main() {
    float temp, celsius_degree;

    // enter fahrenheit temperature
    scanf("%f", &temp);

    celsius_degree = fahrenheit_to_celsius(temp);
    printf("%f", celsius_degree);

    return 0;
}

float fahrenheit_to_celsius(float deg) {
    return (deg - 32) * 5 / 9;
}