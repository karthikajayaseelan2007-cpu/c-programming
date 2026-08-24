/*
Question:
Write a C program to accept a positive integer N from the user
and display all natural numbers from 1 to N.
Also calculate and display their sum.
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }

    printf("\nSum = %d", sum);

    return 0;
}
