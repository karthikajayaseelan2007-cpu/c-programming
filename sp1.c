/*
Problem:
Write a function swap() that accepts two integer pointers
and swaps their values.
*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    swap(&a, &b);

    printf("\n\nAfter Swapping:");
    printf("\na = %d", a);
    printf("\nb = %d\n", b);

    return 0;
}
