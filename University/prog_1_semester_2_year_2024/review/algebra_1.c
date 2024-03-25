#include <stdio.h>
#include <math.h>

int main() {
    int a = 1, x = 2, n = 3;
    int result = 0;

    if (x == 1) {
        result = a * (n - 1);
    } else {
        double x_power_n_plus_one = pow(x, n +1);
        double dominator = 1 - x;
        result = a * ((1- x_power_n_plus_one) / dominator);
    }

    printf("result: %d\n", result);

    return 0;
}
