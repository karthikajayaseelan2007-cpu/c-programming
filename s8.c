/*
Question:
Write a C program to implement a library book record
containing Book ID, Name, Author, Copies Available,
and display all details.
*/

#include <stdio.h>

struct LibraryBook
{
    int bookId;
    char name[100];
    char author[50];
    int copies;
};

int main()
{
    struct LibraryBook b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Author: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Copies Available: ");
    scanf("%d", &b.copies);

    printf("\nLibrary Book Details\n");
    printf("Book ID: %d\n", b.bookId);
    printf("Book Name: %s\n", b.name);
    printf("Author: %s\n", b.author);
    printf("Copies Available: %d\n", b.copies);

    return 0;
}
