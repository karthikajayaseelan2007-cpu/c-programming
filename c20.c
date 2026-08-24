/*
Question:
Write a C program to compute the factorial of a given
positive integer. Display the intermediate multiplication
steps along with the final factorial value.
*/

#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        printf("\nMultiplication steps:\n");

        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;

            if (i == 1)
                printf("%d", i);
            else
                printf(" x %d", i);
        }

        printf("\n\nFactorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
