#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *temp;
    char oldWord[50], newWord[50], word[100];

    fp = fopen("data.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    printf("Enter word to replace: ");
    scanf("%s", oldWord);

    printf("Enter new word: ");
    scanf("%s", newWord);

    while (fscanf(fp, "%99s", word) == 1)
    {
        if (strcmp(word, oldWord) == 0)
            fprintf(temp, "%s ", newWord);
        else
            fprintf(temp, "%s ", word);
    }

    fclose(fp);
    fclose(temp);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("Word replaced successfully.\n");

    return 0;
}
