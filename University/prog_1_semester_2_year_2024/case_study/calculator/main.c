#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"

int main() {
    int user_input[1000], len = 0, i = 0;
    int mode = 0; // sum = 1, max = 2, median = 3, SD = 4
    float standard_deviation_data[1000];

    printf("Enter mode (sum = 1, max = 2, median = 3, SD = 4): ");
    scanf("%d", &mode);

    if (mode == 1) {
        // sum
        printf("Enter len of array: ");
        scanf("%d", &len);

        for (i = 0; i < len; i++) {
            printf("Enter value for index %d: ", i + 1);
            scanf("%d", &user_input[i]);
        }

        sum(user_input, len);

    } else if (mode == 2) {
        // max value
        printf("Enter len of array: ");
        scanf("%d", &len);

        for (i = 0; i < len; i++) {
            printf("Enter value for index %d: ", i + 1);
            scanf("%d", &user_input[i]);
        } 
        
        max_value(user_input, len);

    } else if (mode == 3) {
        // median
        printf("Enter len of array: ");
        scanf("%d", &len);

        for (i = 0; i < len; i++) {
            printf("Enter value for index %d: ", i + 1);
            scanf("%d", &user_input[i]);
        }  

        median(user_input, len);

    } else if (mode == 4) {
        // standard_deviation
        printf("Enter len of array: ");
        scanf("%d", &len);

        for (i = 0; i < len; i++) {
            printf("Enter value for index %d: ", i + 1);
            scanf("%f", &standard_deviation_data[i]);
        }   
        
        standard_deviation(standard_deviation_data, len);

    } else {
        printf("Please enter the valid value...\n");
    }

    return 0;
}

void sum(int user_input[], int len) {
    int i = 0, sum = 0;

    // calculate result
    for (i = 0; i < len; i++) {
        sum = sum + user_input[i];
    }  

    printf("Sum: %d\n", sum);
}

void max_value(int user_input[], int len) {
    int i = 0, temp = 0, max_value = user_input[0];

    // calculate result
    for (i = 0; i < len; i++) {
        if (max_value < user_input[i]) {
            max_value = user_input[i];
        }
    }

    printf("Max value: %d\n", max_value);
}

void median(int user_input[], int len) {
    int i = 0, j = 0;
    float median = 0, temp = 0;

    // sort array
    for (i = 1; i <= len - 1; i++) { 
        for (j = 1; j <= len - i; j++) {  
            if (user_input[j] <= user_input[j + 1]) {            
                temp = user_input[j];  
                user_input[j] = user_input[j + 1];  
                user_input[j + 1] = temp;  
            } else continue; 
        }  
    }

    // calculate result
    if (len % 2 == 0) {
        median = (user_input[len / 2] + user_input[len / 2 + 1]) / 2.0;
    } else {
        median = user_input[len / 2 + 1];
    }

    printf("Median: %f\n", median);
}

void standard_deviation(float standard_deviation_data[], int len) {
    int i = 0;
    float sum = 0, values = 0, standard_deviation = 0;

    for (i = 0; i < len; i++) {
        sum += standard_deviation_data[i];
    }

    // calculate mean
    float mean = sum / len;

    for (i = 0; i < len; i++) {
        values += pow(standard_deviation_data[i] - mean, 2);
    }

    // find variance (square of standard_deviation) 
    float variance = values / len;

    // calculate result
    standard_deviation = sqrt(variance);
    
    printf("Standard Deviation: %f\n", standard_deviation);
}   
