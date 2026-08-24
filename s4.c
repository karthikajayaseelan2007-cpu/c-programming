/*
Question:
Write a C program to store and display details of a product
(Product ID, Name, Cost).
*/

#include <stdio.h>

struct Product
{
    int productId;
    char name[50];
    float cost;
};

int main()
{
    struct Product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.productId);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter Cost: ");
    scanf("%f", &p.cost);

    printf("\nProduct Details\n");
    printf("Product ID: %d\n", p.productId);
    printf("Name: %s\n", p.name);
    printf("Cost: %.2f\n", p.cost);

    return 0;
}
