/*
Question:
Write a C program to count the frequency of a given character
using a user-defined function.
*/

#include <stdio.h>

int frequency(char str[], char ch)
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    return count;
}

int main()
{
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("Frequency = %d", frequency(str, ch));

    return 0;
}
