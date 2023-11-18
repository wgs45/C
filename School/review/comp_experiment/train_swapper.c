// TRAIN SWAPPING
// L5
#include <stdio.h>
#include <stdlib.h>

// Declare global variables
int n;
int length;
int train[60] = {0};
int i, j, k;
int temp;
int count;

int main(){
    // Read the number of test cases
    printf("Enter the number of test cases: ");
    scanf("%d", &n);

    // Loop through each test case
    while(n--){
        count = 0;

        // Read the length of the train
        printf("Enter the length of the train: ");
        scanf("%d", &length);

        // Read the numbers of the train
        printf("Enter the numbers of the train: ");
        for(int i=0; i<length; i++){
            scanf("%d", &train[i]);
        }

        // Sort the train in ascending order using bubble sort
        for(int i=0; i<length; i++){
            for(int j=0; j<length-1; j++){
                if(train[j] > train[j+1]){
                    printf("train[%d] > train[%d]\n", train[j], train[j+1]);
                    // Swap the elements
                    temp = train[j];
                    printf("temp = %d\n", temp);
                    train[j] = train[j+1];
                    printf("train[j] = %d\n", train[j]);
                    train[j+1] = train[j];
                    printf("train[j+1] = %d\n", train[j+1]);
                    count++;
                    printf("count = %d\n", count);
                }
            }
        }

        // Print the number of swaps required
        printf("optimal train swapping takes %d swaps\n", count);
    }
    return 0;
}
