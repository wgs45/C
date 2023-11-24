#include <stdio.h>
#include <math.h>
#include <cmath> // This line should be removed since it's not a valid C header

// c program to find ducci sequence
// source: uva1954

// sample input:
// 4
// 4
// 8 11 2 7
// 5
// 4 2 0 2 0
// 7
// 0 0 0 0 0 0 0
// 6
// 1 2 3 1 2 3

int main(){
    int n, size, k, temp;
    int num[15];

    scanf("%d", &n); // Read the number of test cases

    while(n--){
        scanf("%d", &size); // Read the size of the sequence
        for(int i=0; i<size; i++){
            scanf("%d", &num[i]); // Read the elements of the sequence
        }
        for(int i=0; i<1000; i++){ // Iterate 1000 times
            temp = num[0]; // Store the first element of the sequence in a temporary variable
            for(int i=0; i<size-1; i++) {
                num[i] = abs(num[i] - num[i+1]); // Calculate the absolute difference between adjacent elements
            }
            num[size-1] = abs(num[size-1] - temp); // Calculate the absolute difference between the last element and the first element

        }

        for(int i=0; i<size; i++){
            if(num[i] != 0){
                int k = 1; // Set k to 1 if any element of the sequence is non-zero
                break;
        }
    }

        if(k == 1){
            printf("LOOP\n"); // If k is 1, print "LOOP"
        } else{
            printf("ZERO\n"); // Otherwise, print "ZERO"
        }

    }

    return 0;
}