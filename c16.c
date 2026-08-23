/*
Write a program to accept a single character from the keyboard and
determine whether it is an uppercase letter, lowercase letter,
digit, or special symbol.
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase letter");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special symbol");

    return 0;
}
