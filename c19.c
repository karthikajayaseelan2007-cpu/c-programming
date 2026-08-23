/*
Question:
Develop a program that accepts an integer and generates
its multiplication table from 1 to 20 in a well-formatted
tabular form.
*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d\n", n);
    

    for (i = 1; i <= 20; i++)
    {
        printf("%2d x %2d = %3d\n", n, i, n * i);
    }

    return 0;
}
