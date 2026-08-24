/*
Question:
Write a C program to determine whether two strings are
anagrams of each other.
Example: "listen" and "silent"
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int frequency[26] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    /* Anagrams must have the same length */
    if (strlen(str1) != strlen(str2))
    {
        isAnagram = 0;
    }
    else
    {
        /* Increase frequency for first string */
        for (i = 0; str1[i] != '\0'; i++)
        {
            frequency[tolower(str1[i]) - 'a']++;
        }

        /* Decrease frequency for second string */
        for (i = 0; str2[i] != '\0'; i++)
        {
            frequency[tolower(str2[i]) - 'a']--;
        }

        /* Check whether all frequencies are zero */
        for (i = 0; i < 26; i++)
        {
            if (frequency[i] != 0)
            {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.");
    else
        printf("The strings are not anagrams.");

    return 0;
}
