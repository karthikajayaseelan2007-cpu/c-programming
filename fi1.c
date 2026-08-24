#include <stdio.h>

void writeStudent()
{
    FILE *fp;
    char name[50];
    int rollNo;
    float marks;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("Unable to create file.\n");
        return;
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Roll Number: %d\n", rollNo);
    fprintf(fp, "Marks: %.2f\n", marks);

    fclose(fp);

    printf("Student details written successfully.\n");
}

int main()
{
    writeStudent();
    return 0;
}
