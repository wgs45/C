#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;

    while(scanf("%d", &n) == 1) {
        int *sequence = (int *) malloc(n * sizeof(int));

        for (i = 0; i < n; i++) {
            scanf("%d", &sequence[i]);
        }

        int *differences = (int *) malloc((n - 1) * sizeof(int));

        for (i = 0; i < n - 1; i++) {
            differences[i] = abs(sequence[i] - sequence[i + 1]);
        }

        int is_jolly = 1;

        for (i = 1; i <= n - 1; i++) {
            int found = 0;

            for (j = 0; j < n - 1; j++) {
                if (differences[j] == i) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                is_jolly = 0;
                break;
            }
        }

        if (is_jolly) {
            printf("jolly\n");
        } else {
            printf("not jolly\n");
        }

        free(sequence);
        free(differences);
    }

    return 0;
}