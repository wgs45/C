#include <stdio.h>

int main() {
    int h1, m1, h2, m2; // Declare variables to store hours and minutes

    while (1) { // Infinite loop to continuously read and process input
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2); // Read input values for hours and minutes

        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) { // Check if all input values are zero, indicating end of input
            break; // Exit the loop if all input values are zero
        }

        int current_total_minutes = h1 * 60 + m1; // Calculate the total minutes for the current time
        int alarm_total_minutes = h2 * 60 + m2; // Calculate the total minutes for the alarm time

        int time_elapsed_minutes; // Declare variable to store the time elapsed in minutes

        if (current_total_minutes <= alarm_total_minutes) { // Check if the current time is before or equal to the alarm time
            time_elapsed_minutes = alarm_total_minutes - current_total_minutes; // Calculate the time elapsed in minutes
        } else {
            time_elapsed_minutes = (24 * 60 - current_total_minutes) + alarm_total_minutes; // Calculate the time elapsed considering the next day
        }

        printf("%d\n", time_elapsed_minutes); // Print the time elapsed in minutes
    }

    return 0; // Return 0 to indicate successful execution
}