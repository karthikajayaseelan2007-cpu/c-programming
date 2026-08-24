#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no;
    char name[50];
    char department[50];
};

int main()
{
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll_no);

    printf("Enter Name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter Department: ");
    scanf(" %[^\n]", s->department);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("Department: %s\n", s->department);

    free(s);

    return 0;
}
