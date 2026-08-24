/*
Question:
Write a C program to replace every vowel in a sentence
with the '*' character.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    /* Traverse through the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* Check whether the character is a vowel */
        if (tolower(str[i]) == 'a' ||
            tolower(str[i]) == 'e' ||
            tolower(str[i]) == 'i' ||
            tolower(str[i]) == 'o' ||
            tolower(str[i]) == 'u')
        {
            str[i] = '*';
        }
    }

    printf("String after replacing vowels: %s", str);

    return 0;
}
