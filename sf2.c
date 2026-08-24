/*
Problem:
Create a structure Rectangle containing length and width.
Write separate functions to calculate area and perimeter
by passing the structure as an argument.
*/

#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

float area(struct Rectangle r)
{
    return r.length * r.width;
}

float perimeter(struct Rectangle r)
{
    return 2 * (r.length + r.width);
}

int main()
{
    struct Rectangle r;
    float a, p;

    printf("Enter Length: ");
    scanf("%f", &r.length);

    printf("Enter Width: ");
    scanf("%f", &r.width);

    a = area(r);
    p = perimeter(r);

    printf("\nArea      = %.2f\n", a);
    printf("Perimeter = %.2f\n", p);

    return 0;
}

