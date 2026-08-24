/*
Question:
Write a C program to store date information
(Day, Month, Year) using a structure and display it
in DD/MM/YYYY format.
*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct Date d;

    printf("Enter Day: ");
    scanf("%d", &d.day);

    printf("Enter Month: ");
    scanf("%d", &d.month);

    printf("Enter Year: ");
    scanf("%d", &d.year);

    printf("Date: %02d/%02d/%04d\n",
           d.day, d.month, d.year);

    return 0;
}
