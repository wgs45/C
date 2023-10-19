#include <stdio.h>

int main() {
    // define variable
    int i;
    int number;

    // print out questions
    printf("Enter only odd number: ");
    scanf("%d", &number);
    printf("U entered number: %d\n", number);

    if(number % 2 != 0) {
        // for loop to reverse number
        for (i = number; i > 0; i--) {
            printf("%d\n", i);
        }
        printf("I LOVE MR.PONTEN \n");
    } 

    return 0;
}