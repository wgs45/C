#include <stdio.h>

int main() {
    int i = 0;
    float num, past;

    printf("Input a number: ");
    while(scanf("%f", &num) != EOF) {
        if (i == 0) {
            printf("%.2f ", num);
            past = num;
        } else {
            if (num < past) {
                break;
            } else {
                past = num;
                printf("%.2f ", past);
            }
        }
        i++;
    }

    return 0;
}