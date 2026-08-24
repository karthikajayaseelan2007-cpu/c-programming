/*
Question:
Write a C program to demonstrate the difference between
direct member access and pointer member access (. and ->).
*/

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
};

int main()
{
    struct Student s = {101, "Karthika"};
    struct Student *ptr;

    ptr = &s;

    /* Direct member access using . */
    printf("Using dot operator (.):\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);

    /* Pointer member access using -> */
    printf("\nUsing arrow operator (->):\n");
    printf("Roll Number: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);

    return 0;
}
