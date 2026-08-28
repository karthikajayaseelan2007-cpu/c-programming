#include <stdio.h>
#include <ctype.h>

int countVowels(const char *filename)
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            count++;
        }
    }

    fclose(fp);
    return count;
}

int countCharacters(const char *filename)
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isalpha(ch))
            count++;
    }

    fclose(fp);
    return count;
}

int countNumbers(const char *filename)
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isdigit(ch))
            count++;
    }

    fclose(fp);
    return count;
}

int main()
{
    int choice;
    const char *filename = "data.txt";

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Count Vowels\n");
        printf("2. Count Characters\n");
        printf("3. Count Numbers\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Number of vowels = %d\n",
                       countVowels(filename));
                break;

            case 2:
                printf("Number of characters = %d\n",
                       countCharacters(filename));
                break;

            case 3:
                printf("Number of numbers = %d\n",
                       countNumbers(filename));
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
