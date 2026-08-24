/*
Question:
Write a C program to calculate the area of a rectangle
by storing length and breadth in a structure.
*/

#include <stdio.h>

struct Rectangle
{
    float length;
    float breadth;
};

int main()
{
    struct Rectangle r;
    float area;

    printf("Enter Length: ");
    scanf("%f", &r.length);

    printf("Enter Breadth: ");
    scanf("%f", &r.breadth);

    area = r.length * r.breadth;

    printf("Area of Rectangle = %.2f\n", area);

    return 0;
}

