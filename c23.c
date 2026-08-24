/*
Question:
Write a C program to determine whether the given number
is an Armstrong number. Display all intermediate calculations
performed during verification.
*/

#include <stdio.h>

int main()
{
    int n, original, remainder;
    int digits = 0, sum = 0;
    int temp, power, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    /* Count the number of digits */
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    printf("\nIntermediate calculations:\n");

    while (temp != 0)
    {
        remainder = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
        {
            power = power * remainder;
        }

        printf("%d^%d = %d\n", remainder, digits, power);

        sum = sum + power;
        temp = temp / 10;
    }

    printf("Sum = %d\n", sum);

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}
