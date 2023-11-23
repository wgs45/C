#include <stdio.h>

// c program to calculate doomsday algorithm
// source: uva12019

// sample input:
// 8 => use case
// 1 6 => month, date
// 2 28
// 4 5
// 5 26
// 8 1
// 11 1
// 12 25
// 12 31

// sample output:
// Thursday
// Monday
// Tuesday
// Thursday
// Monday
// Tuesday
// Sunday
// Saturday

int main() {
    // Array to store the number of days in each month
    const int day_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Array to store the names of the days in a week
    const char *day_in_week[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};

    // Variables for input and iteration
    int test_case, month, day, i, total_days;

    // input test case
    scanf("%d", &test_case);

    while(test_case--) {
        // input month and day
        scanf("%d %d", &month, &day);

        // Initializing total_days to 0
        total_days = 0;

        // Calculating total days passed till the input month
        for (i = 0; i < month; i++) {
            total_days += day_in_month[i];
        }

        // Adding the input day to the total days
        total_days += day;

        // Printing the day of the week based on the total days
        printf("%s\n", day_in_week[total_days % 7]);
    }

    return 0;
}