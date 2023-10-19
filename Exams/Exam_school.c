#include <stdio.h>

int main() {
    int numbers;

    printf("Input how many numbers: ");
    scanf("%d", &numbers);    
    printf("You input: %d\n", numbers);
w
    for (int i = 0; i < numbers; i++) {
        i++; 
        printf("Result: %d\n", i);
    }

    return 0;
}
