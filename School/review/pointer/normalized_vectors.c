#include <stdio.h>
#include <math.h>

// c program to calculate normalized vectors
// sample input:
// 3.0 4.0

// sample output:
// 0.600000 0.800000

// Function prototype
void normalized_vector(float vector[], int size);

int main() {
    int i;
    int size = 2;
    float vector[size];

    // Input vector values
    printf("Enter vector values:\n");
    for (i = 0; i < size; i++)
        scanf("%f", &vector[i]);

    // Call the function to normalize the vector
    normalized_vector(vector, size);

    // Output the normalized vector
    printf("Normalized vector: ");
    for (i = 0; i < size; i++)
        printf("%f ", vector[i]);

    return 0;
}

// Function to normalize a vector
void normalized_vector(float vector[], int size) {
    // Calculate the magnitude of the vector
    float magnitude = 0.0;
    for (int i = 0; i < size; i++) {
        magnitude += vector[i] * vector[i];
    }
    magnitude = sqrt(magnitude);

    // Normalize the vector
    for (int i = 0; i < size; i++) {
        vector[i] /= magnitude;
    }
}
