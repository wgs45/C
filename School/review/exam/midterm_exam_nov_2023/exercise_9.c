#include <stdio.h>

int main() {
    int h1, m1, h2, m2;

    while (1) {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            break;
        }

        int current_total_minutes = h1 * 60 + m1;
        int alarm_total_minutes = h2 * 60 + m2;

        int time_elapsed_minutes;

        if (current_total_minutes <= alarm_total_minutes) {
            time_elapsed_minutes = alarm_total_minutes - current_total_minutes;
        } else {
            time_elapsed_minutes = (24 * 60 - current_total_minutes) + alarm_total_minutes;
        }

        printf("%d\n", time_elapsed_minutes);
    }

    return 0;
}
