#include <stdio.h>

// ! function prototypes
int check_repeated(int arr[]);

int main() {
    int lottery[100][6];
    int draw[6];
    int num, i, j;
    int ticketCount = 0, ticketOrder = 0;

    // reading lottery numbers
    while(scanf("%d", &num) != EOF) {
        if (ticketCount == 6) {
            ticketCount = 0;
            ticketOrder++;
        }
        lottery[ticketOrder][ticketCount++] = num;
    }

    for (j = 0; j < 6; j++) {
        draw[j] = lottery[ticketOrder][j];
    }

    return 0;
}

int check_repeated(int arr[]) {
    int i, j;

    for(i = 0; i < 6; i++) {
        for (j = i + 1; j < 6; j++) {
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }

    return 0;
}