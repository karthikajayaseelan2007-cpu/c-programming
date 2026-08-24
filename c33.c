/*
Question:
Write a C program to remove all vowels from a string
using a user-defined function.
*/

#include <stdio.h>

int isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U');
}

void removeVowels(char str[])
{
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (!isVowel(str[i]))
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeVowels(str);

    printf("String without vowels: %s", str);

    return 0;
}
