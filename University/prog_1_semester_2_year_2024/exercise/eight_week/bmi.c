#include <stdio.h>

int main() {
    float weight = 0, height = 0, bmi = 0;

    printf("Enter height(m) and weight(kg) (seperated with space): ");
    scanf("%f %f", &height, &weight);

    bmi = weight / (height * height);

    printf("Bmi: %f\n", bmi);

    return 0;
}
