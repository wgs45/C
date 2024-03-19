#include <stdio.h>

#define SIZE 5

// function prototype
void display_array(int arr[SIZE][SIZE]);

void rotate90(int arr[SIZE][SIZE]);

void rotate180(int arr[SIZE][SIZE]);

void rotate270(int arr[SIZE][SIZE]);

int main() {
    int arr[SIZE][SIZE];
    int i, j; 

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &arr[j][i]);
        }
    }

    printf("Original array: \n");
    display_array(arr);

    printf("rotate90: \n");
    rotate90(arr);

    printf("rotate180: \n");
    rotate180(arr);

    printf("rotate270: \n");
    rotate270(arr);
     
    return 0;
}

void display_array(int arr[SIZE][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }
}

void rotate90(int arr[SIZE][SIZE]) {
   int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = SIZE - 1; j >= 0; j--) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

void rotate180(int arr[SIZE][SIZE]) {
    int i, j;

    for (i = SIZE - 1; i >= 0; i--) {
        for (j = SIZE - 1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void rotate270(int arr[SIZE][SIZE]) {
    int i, j;

    for (i = SIZE - 1; i >= 0; i--) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}


