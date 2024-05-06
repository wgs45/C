#include <stdio.h>

void show_2d_arr(int arr[][3], int width, int height);

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    show_2d_arr(arr, 3, 2);

    return 0;
}

void show_2d_arr(int arr[][3], int width, int height) {
    int x, y;

    for (x = 0; x < width; x++) {
        for(y = 0; y < height; y++) {
            printf("%d ", arr[x][y]);
        }
        printf("\n");
    }

}
