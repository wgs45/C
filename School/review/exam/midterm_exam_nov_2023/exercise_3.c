#include <stdio.h>

int main() {
    int money, split_amount;

    scanf("%d", &money);

    split_amount = money / 5;
    money = split_amount;

    switch (money) { // Start a switch statement based on the value of 'money'
        case 4: printf("coffee milk tea"); break; // If 'money' is 4, print "coffee milk tea"
        case 3: printf("milk tea"); break; // If 'money' is 3, print "milk tea"
        case 2: printf("tea"); break; // If 'money' is 2, print "tea"
        case 1: printf("nothing"); break; // If 'money' is 1 or 0, print "nothing"
        default: printf("coffee milk tea"); break; // For any other value of 'money', print "coffee milk tea"
    }

    return 0;
}