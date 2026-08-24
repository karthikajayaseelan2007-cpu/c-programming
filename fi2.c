#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int lines = 0, words = 0, characters = 0;
    int inWord = 0;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Lines      : %d\n", lines);
    printf("Words      : %d\n", words);
    printf("Characters : %d\n", characters);

    return 0;
}
