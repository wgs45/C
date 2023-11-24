#include <stdio.h>

int main() {
    // initialize variables
    int hour1, minute1, hour2, minute2, output;

    while (1) {
        scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2);

        if (hour1 == 0) {
            hour1 = 24;
        }
        else if (hour2 == 0) {
            hour2 = 24;
        }

        int time1 = (hour1 * 60) + minute1;
        int time2 = (hour2 * 60) + minute2;

        output = time2 - time1;

        if (output == -1440) {
            return 0;
        } else if (output < 0) {
            output += 1440;
        }

        printf("Output: %d\n", output);
    }

    return 0;
}