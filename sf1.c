/*
Problem:
Create a structure Student containing roll number, name,
department, and CGPA. Read details of 5 students and
display them using a function displayStudent().
*/

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    char department[50];
    float cgpa;
};

void displayStudent(struct Student s)
{
    printf("\nRoll Number : %d", s.rollNo);
    printf("\nName        : %s", s.name);
    printf("\nDepartment  : %s", s.department);
    printf("\nCGPA        : %.2f\n", s.cgpa);
}

int main()
{
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Department: ");
        scanf(" %[^\n]", s[i].department);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 5; i++)
    {
        displayStudent(s[i]);
    }

    return 0;
}
