/*
A student passes only if he/she scores at least 40 marks in every
subject. Write a program to determine whether the student has passed
or failed after accepting marks in five subjects.
*/

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40)
        printf("Student has passed");
    else
        printf("Student has failed");

    return 0;
}
