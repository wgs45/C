#include <stdio.h>

void vending(int amount);

int main() {
    int amount = 0;

    printf("Enter amount: ");
    scanf("%d", &amount);

    vending(amount);

    return 0;
}

void vending(int amount) {
    if (amount <= 5) {
        printf("Nothing.\n");
    } else {
        switch (amount) {
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14: printf("Yogert.\n"); break;
            case 15:
            case 16:
            case 17:
            case 18:
            case 19: 
            case 20:
            case 21: 
            case 22: 
            case 23:
            case 24:
            case 25: printf("Black tea.\n"); break;
            default: printf("Yogert, Black tea.\n"); break;
        }
    }
}
