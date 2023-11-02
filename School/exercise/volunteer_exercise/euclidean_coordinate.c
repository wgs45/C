#include <stdio.h>
#include <math.h>

// ! function prototypes
double d(double x1, double y1, double x2, double y2);

int main() {

    printf("%lf", d(0, 0, 3, 4));

    return 0;
}

double d(double x1, double y1, double x2, double y2) {
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    return distance;
};

