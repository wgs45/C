#include <stdio.h>

// Function prototype for calculate_bmi
float calculate_bmi(float height, float weight);

int main() {
    float weight, height, bmi;

    // Prompting the user to enter weight and height
    scanf("%f %f", &weight, &height);

    // Calling calculate_bmi function and storing the result in bmi variable
    bmi = calculate_bmi(height, weight);

    // Printing the calculated bmi with 2 decimal places
    printf("%.2f", bmi);

    return 0;
}

// Function to calculate BMI
float calculate_bmi(float height, float weight) {
    // Converting height from cm to meters
    height = height / 100;

    // Calculating BMI using the formula: weight / (height * height)
    float result =  weight / (height * height);

    // Returning the calculated BMI
    return result;
}