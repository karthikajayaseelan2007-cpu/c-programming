/*
Question:
Write a C program to remove all digits from a mixed string.
Example: "AB123CD45" -> "ABCD"
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a mixed string: ");
    scanf("%s", str);

    /* Traverse through each character */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* Keep only non-digit characters */
        if (!isdigit(str[i]))
        {
            str[j] = str[i];
            j++;
        }
    }

    /* Add null character at the end */
    str[j] = '\0';

    printf("String after removing digits: %s", str);

    return 0;
}
