/*
Question:
Write a C program to store and display the details
of a mobile phone (Brand, Model, Price).
*/

#include <stdio.h>

struct Mobile
{
    char brand[50];
    char model[50];
    float price;
};

int main()
{
    struct Mobile m;

    printf("Enter Brand: ");
    scanf(" %[^\n]", m.brand);

    printf("Enter Model: ");
    scanf(" %[^\n]", m.model);

    printf("Enter Price: ");
    scanf("%f", &m.price);

    printf("\nMobile Details\n");
    printf("Brand: %s\n", m.brand);
    printf("Model: %s\n", m.model);
    printf("Price: %.2f\n", m.price);

    return 0;
}
