#include <stdio.h>

int main() {
    int bmi;
    double h, w; // h = height, w = width

    printf("Enter height(m) and weight(kg): ");
    scanf("%lf %lf", &h, &w);
    
    bmi = w / (h * h);

    if (bmi < 18.5) {
        printf("體重公頃");
    } else if (bmi >= 18.5 && bmi < 24) {
        printf("正常");
    } else if (bmi >= 24 && bmi < 28) {
        printf("超重");
    } else if (bmi >= 28) {
        printf("肥胖");
    } else {
        printf("Invalid value");
    };

    return 0;

}