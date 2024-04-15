#include <stdio.h>

void spiral_matrix(int n);

int main() {
    int n = 0;

    printf("Input n: ");
    scanf("%d", &n);

    spiral_matrix(n);

    return 0;
}

void spiral_matrix(int n) {
    int matrix[10][10];
    int top = 0, bot = n - 1, left = 0, right = n - 1, value = 1, i = 0, j = 0;

    while(top <= bot && left <= right) {
        for (i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;

        for (i = top; i <= bot; i++) {
            matrix[i][right] = value++;
        }
        right--;

        for (i = right; i >= left; i--) {
            matrix[bot][i] = value++;
        }
        bot--;

        for (i = bot; i >= top; i--) {
            matrix[i][left] = value++;
        }
        left++;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
