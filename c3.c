#include <stdio.h>

int main()
{
    int totalDays, years, months, weeks, days;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    totalDays = totalDays % 365;

    months = totalDays / 30;
    totalDays = totalDays % 30;

    weeks = totalDays / 7;
    days = totalDays % 7;

    printf("Years = %d\n", years);
    printf("Months = %d\n", months);
    printf("Weeks = %d\n", weeks);
    printf("Remaining Days = %d\n", days);

    return 0;
}
