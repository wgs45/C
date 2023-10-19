#include <stdio.h>
#include <stdlib.h>
#define NUM 2

void printArr1(int **array);
void printArr2(int (*array)[NUM]);
void printArr3(int array[][NUM]);

int main() {

    int data[NUM][NUM] = {0};
    for (int row = 0; row < NUM; row++) {
        for (int col = 0; col < NUM; ++col) {
            scanf("%d", &data[row][col]);
        }
    }

    printArr1(data);
    //printArr2(data);
    // printArr3(data);

    return 0;
}


void printArr1(int **array) {
    for (int row = 0; row < NUM; ++row) {
        for (int col = 0; col < NUM; ++col) {
            printf("%d ", *(*(array + row) + col));
        }
        printf("\n");
    }
}

void printArr2(int (*array)[NUM]) {
    for (int row = 0; row < NUM; ++row) {
        for (int col = 0; col < NUM; ++col) {
            printf("%d ", array[row][col]);
        }
        printf("\n");
    }
}

void printArr3(int array[][NUM]) {
    for (int row = 0; row < NUM; ++row) {
        for (int col = 0; col < NUM; ++col) {
            printf("%d ", array[row][col]);
        }
        printf("\n");
    }
}