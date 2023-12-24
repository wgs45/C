#include <stdio.h>

// ! func prototype
void subset_gen(int arr[], int left, int right, int choice[]);
void print_subset(int arr[], int choice[], int size);
void init_array(int arr[], int size);
int is_empty(int arr[], int size);

int main() {
    int num[20], choice[20], count = 0, i = 0;

    printf("Input integer list (up to 20): ");

    while(scanf("%d", &num[i++]) != EOF) {
        count++;
    }

    init_array(choice, count);

    subset_gen(num, 0, count - 1, choice);

    return 0;
}

void print_subset(int arr[], int choice[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        if (choice[i] == 1) {
            printf("%d", arr[i]);
        }
    }

    printf("\n");
}

void init_array(int arr[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

int is_empty(int arr[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return 0;
        }
    }

    return 1;
}

void subset_gen(int arr[], int left, int right, int choice[]) {
    if (left > right) {
        if (is_empty(choice, right + 1)) {
            printf("Empty set\n");
        } else {
            print_subset(arr, choice, right + 1);
        }

        return;
    }

    choice[left] = 1;
    subset_gen(arr, left + 1, right, choice);
    choice[left] = 0;
    subset_gen(arr, left + 1, right, choice);
}