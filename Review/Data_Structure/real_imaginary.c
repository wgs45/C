#include <stdio.h>

// 4.3+2.1i 
// 6.2+1.5i

struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex num1, num2, result;

    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imaginary);

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    printf("Output: %0.1f + %0.1fi", result.real, result.imaginary);

    return 0;
}