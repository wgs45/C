// C recursive implementation

#include <stdio.h>
#include <stdlib.h>

// function prototypes
int find_longest_sequence(int arr[], int num, int* max_reference);
int sequence_result(int arr[], int num);

int main() {
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int num = sizeof(arr) / sizeof(arr[0]);

    printf("num: %d\n", num);
    printf("Longest increasing subsequence: %d\n", sequence_result(arr, num));

    return 0;
}

int find_longest_sequence(int arr[], int num, int* max_reference) {
    // base case
    if(num == 1) {
        return 1;
    }

    // 'max_ending_here' is length of this func
    // ending with arr[n - 1]
    int res, max_ending_here = 1;

    // Recursively get all sub_sequence ending with arr[0],
    // arr[1] ... arr[n-2]. If arr[i-1] is smaller
    // than arr[n-1], and max ending with arr[n-1]
    // needs to be updated, then update it

    for(int i = 1; i < num; i++) {
        res = find_longest_sequence(arr, i, max_reference);
        if (arr[i - 1] < arr[num - 1] && res + 1 > max_ending_here) {
            max_ending_here = res + 1;
        }
    }

    // Compare max_ending_here with the overall
    // max. And update the overall max if needed
    if (*max_reference < max_ending_here) {
        *max_reference = max_ending_here;
    }

    // return the length
    return max_ending_here;
}

int sequence_result(int arr[], int num) {
    int max = 1;
    
    find_longest_sequence(arr, num, &max);
    
    return max;
}