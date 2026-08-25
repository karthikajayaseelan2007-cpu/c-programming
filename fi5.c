#include <stdio.h>

int main()
{
    FILE *source, *destination;
    long position;
    char ch;

    source = fopen("source.txt", "r");
    destination = fopen("reverse.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    fseek(source, 0, SEEK_END);
    position = ftell(source);

    while (position > 0)
    {
        position--;
        fseek(source, position, SEEK_SET);
        ch = fgetc(source);
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File reversed successfully.\n");

    return 0;
}	
