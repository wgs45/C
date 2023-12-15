#include <stdio.h>
#include <limits.h>

// C program to find the cheapest base
// Source: UVa 11005

int main() {
    int use_case = 0, r = 0;

    // Get the number of use cases from input
    scanf("%d", &use_case);

    // Loop based on the number of use cases
    for (r = 0; r < use_case; r++) {
        printf("Case %d: \n", r + 1);

        int base_cost[36] = {0};
        int query_time = 0, query_num = 0, i;

        // Get the cost of each base
        // 35 is the maximum number of bases
        for(i = 0; i <= 35; i++) {
            scanf("%d", base_cost + i);
        }
        // Get the number of queries
        scanf("%d", &query_time);

        int time = 0;

        // Loop based on the query time
        for (time = 0; time < query_time; time++) {
            int sum[37] = {0};

            // Get the query number
            scanf("%d", &query_num);

            int min = INT_MAX;
            int j = 0;

            // Calculate the sum of costs for each base
            for (j = 2; j <= 36; j++) {
                int temp = query_num;
                do {
                    sum[j] += base_cost[temp % j];
                    temp = temp / j;
                } while (temp > 0);
                // Update the minimum sum
                if (min > sum[j]) {
                    min = sum[j];
                }
            }
            printf("Cheapest base(s) for number %d: ", query_num);

            int k = 0, len = 0;
            char str[1000] = {'\0'};

            // Find the bases with the minimum sum
            for (k = 0; k <= 36; k++) {
                if (sum[k] == min) {
                    if (len == 0) {
                        len += snprintf(str + len, sizeof(str) - len, "%d", k);
                    } else {
                        len += snprintf(&str[len], sizeof(str) - len, " %d", k);
                    }
                }
            }
            printf("%s\n", str);
        }
        // Print a new line between use cases
        if (r != use_case - 1) {
            printf("\n");
        }
    }

    return 0;
}