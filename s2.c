/*
Question:
Write a C program to store book details
(Title, Author, Price) using a structure.
*/

#include <stdio.h>

struct Book
{
    char title[100];
    char author[50];
    float price;
};

int main()
{
    struct Book b;

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}
