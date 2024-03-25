#include <stdio.h>
#include <math.h>

int main() {
    float pi = 3.14, input;
    //int a = 121, i, prime = 1;

    //for (i = 2; i < sqrt(a); i++) {
        //if (a % i == 0) {
            //prime = 0;
           //break;
        //}
    // }

    // printf("Prime numbers: %d\n", prime);

    input = floor(pi);
    printf("floor(%f) = %.1f\n", pi, input);

    input = ceil(input);
    printf("ceil(%f) = %.1f\n", pi, input);

    input = round(input);
    printf("round(%f) = %.1f\n", pi, input);

    // program to calculate power in math
    int num_1 = 12345, num_2, num_3, i;

    for (i = 4; i >= 0; i--) {
        num_2 = num_1 / (int)pow(10, i);
        num_3 = num_1 % (int)pow(10, i);
        num_1 = num_3;
        printf("num: %d\n", num_2);
    }


    return 0;
}
