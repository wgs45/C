#include <stdio.h>

int main() {
    int numStudents;
    printf("How many students: ");
    scanf("%d", &numStudents);

    int monthCount[12] = {0};  // Initialize an array to count students in each month

    for (int i = 0; i < numStudents; i++) {
        int yy, mm, dd;
        printf("Enter birthdate in yy/mm/dd format for student %d: ", i + 1);
        scanf("%d/%d/%d", &yy, &mm, &dd);

        // Increment the count for the corresponding month
        if (mm >= 1 && mm <= 12) {
            monthCount[mm - 1]++;
        } else {
            printf("Invalid month in date: %d/%d/%d\n", yy, mm, dd);
        }
    }

    // Print the results
    printf("\nBirthdate count by month:\n");
    for (int i = 0; i < 12; i++) {
        printf("Month %d: %d person%s were born in this month.\n", i + 1, monthCount[i], (monthCount[i] == 1) ? " was" : "s were");
    }

    return 0;
}
