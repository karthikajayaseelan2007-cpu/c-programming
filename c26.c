/*
Question:
Write a C program to find the Greatest Common Divisor (GCD)
and Least Common Multiple (LCM) of two positive integers
using iterative methods.
*/

#include <stdio.h>

int main()
{
    int a, b;
    int x, y, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    /* Find GCD using iterative method */
    while (y != 0)
    {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;

    /* Calculate LCM */
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);

    return 0;
}
