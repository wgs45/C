#include <stdio.h>

int main() {
    double arr[10];
    double min, max;
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }

    min = max = arr[0];

    for (i = 0; i < 10; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    printf("min: %lf, max: %lf\n", min, max);

    return 0;
}
