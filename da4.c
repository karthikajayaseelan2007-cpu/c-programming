#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char *name;
    float marks;
};

int main()
{
    int n, i;
    struct Student *s;

    printf("Enter number of students: ");
    scanf("%d", &n);

    s = (struct Student *)malloc(n * sizeof(struct Student));

    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        s[i].name = (char *)malloc(50 * sizeof(char));

        if (s[i].name == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("\nEnter details of student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nID: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    for (i = 0; i < n; i++)
    {
        free(s[i].name);
    }

    free(s);

    return 0;
}
