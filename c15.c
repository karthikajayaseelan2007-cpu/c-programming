/*
Write a program to check whether the entered year is a leap year
according to the Gregorian calendar rules.
*/

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap year");
    else
        printf("Not a leap year");

    return 0;
}
