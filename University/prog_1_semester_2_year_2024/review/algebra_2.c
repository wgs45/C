#include <stdio.h>

int main() {
    double a = 1, x = 2, r = 0;
    int n = 3, i;

    for(i = 0; i <= n; i++) {
        r += a;
        a *= x;
    }

    printf("%.0lf\n", r);
        
    return 0;
}
