/*
Write a program to accept the lengths of three sides of a triangle
and determine whether the given sides can form a valid triangle.
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
        printf("Valid triangle");
    else
        printf("Invalid triangle");

    return 0;
}
