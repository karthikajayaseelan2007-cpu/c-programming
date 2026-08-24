/*
Question:
Write a C program to store three subject marks inside
a student structure and calculate the percentage.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    float mark1;
    float mark2;
    float mark3;
};

int main()
{
    struct Student s;
    float total, percentage;

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter three subject marks: ");
    scanf("%f %f %f", &s.mark1, &s.mark2, &s.mark3);

    total = s.mark1 + s.mark2 + s.mark3;
    percentage = total / 3;

    printf("\nName: %s\n", s.name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
