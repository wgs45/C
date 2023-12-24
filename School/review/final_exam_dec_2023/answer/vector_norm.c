#include <stdio.h>
#include <math.h>

void norm_vector(float *vector, int size);

int main() {
  float vector[] = {3.0, 4.0};

  int size = sizeof(vector) / sizeof(vector[0]);

  printf("Original vector: %.2f, %.2f\n", vector[0], vector[1]);

  norm_vector(vector, size);

  printf("Normalized vector: %.2f, %.2f\n", vector[0], vector[1]);

  return 0;
}

void norm_vector(float *vector, int size) {
  int i;
  float magnitude = 0.0;

  for (i = 0; i < size; i++) {
    magnitude += vector[i] * vector[i];
  }

  magnitude = sqrt(magnitude);

  for (i = 0; i < size; i++) {
    vector[i] /= magnitude;
  }

}
