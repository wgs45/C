#include <stdio.h>

// function prototype
int maxDifference(int arr[], int arr_size);

int main() {
    // input array
    int arr[] = {3, 6, 9, 1};

    int temp = 0;      
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("length in an array: %d\n", len);    

    // Sorting
    for (int i = 0; i < len; i++) {     
        for (int j = i+1; j < len; j++) {  
           if(arr[i] > arr[j]) {    
               temp = arr[i];
               // printf("temp and arr[i]: %d %d\n", temp, arr[i]);    
               arr[i] = arr[j];
               // printf("arr[i] and arr[j]: %d %d\n", arr[i], arr[j]);     
               arr[j] = temp;    
               // printf("arr[j] and temp: %d %d\n", arr[j], temp);
           }     
        }     
    }    

    printf("After Sorting: \n");    
    for (int i = 0; i < len; i++) {     
        printf("%d ", arr[i]);    
    }    

    printf("\n"); 

    // find maxDifference
    printf("Maximum Difference is: %d\n", maxDifference(arr, 4));

    return 0;
}

int maxDifference(int arr[], int arr_size) {

    int temp_1, temp_2;

    int max_difference = arr[1] - arr[0];
    // index 1 - 0 = max_difference
    // printf("subtact index 1 and 0 = %d\n", max_difference);

    for (int i = 0; i < arr_size; i++) {
        for (int j = 0; j < arr_size; j++) {
            if (arr[j] - arr[i] > max_difference) {
                max_difference = arr[j] - arr[i];
                printf("i: %d\n", arr[i]);
                printf("j: %d\n", arr[j]);
                printf("max_difference: %d\n", max_difference);
            }
        }
    }
    return max_difference;
}
