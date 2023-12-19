#include <stdio.h>
#include <stdlib.h>

// c program to calculate doomsday date

int main() {
  const int day_in_a_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  const char *day_in_a_week[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};

  int use_case, month, day, i, total_days;

  // input use_case
  scanf("%d", &use_case);

  while(use_case--) {
    scanf("%d %d", &month, &day);

    total_days = 0;

    for (i = 0; i < month; i++) {
      total_days += day_in_a_month[i];
    }

    total_days += day;

    printf("%s\n", day_in_a_week[total_days % 7]);
    
  }

  return 0;
}
