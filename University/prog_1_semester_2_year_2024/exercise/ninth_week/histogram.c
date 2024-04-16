#include <stdio.h>

int main(){
    int arr[100000], t, count=0, x, y;
    int hist[6][1000];
    
    // Initialize hist array
    for(x=0; x<1000; x++){
        for(y=0; y<6; y++){
            hist[y][x] = ' ';
        }
    }

    // Read integers into arr
    while( scanf("%d", &arr[count]) != EOF ){
        count++;
    }

    int i=0;
    int bucket[6] = {0};

    // Count occurrences
    for(i=0; i<count; i++){
        t = arr[i];
        bucket[t]++;
    }

    // Print counts
    for(i=1; i<=5; i++){
        printf("%d ", bucket[i]);
    }
    printf("\n");

    // Print histogram
    for(y=3; y>0; y--){
        for(x=1; x<=5; x++){
            if(bucket[x] >= y){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

