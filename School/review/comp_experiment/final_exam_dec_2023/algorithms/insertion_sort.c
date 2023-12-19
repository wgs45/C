#include <stdio.h>
#include <limits.h>

// func prototypes
void insertion_sort(int *a, int new_data, int i);

int main() {
    int a[1001] = {INT_MIN};
    int i = 1, r = 0;

    while(scanf("%d", &r) != EOF) {
        insertion_sort(a, r, i - 1);
    }
}

void insertion_sort(int *a, int new_data, int i) {
    int j = i;
    
    while(new_data < a[j]) {
        a[j + 1] = a[j];
        j--;
    }

    for (int k = 1; k <= i + 1; k++) {
        printf("%d ", a[k]);
    }
}