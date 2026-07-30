/*Find the length of a product name without using strlen()*/


#include <stdio.h>

int main() {
    char product[100];
    int i = 0;

    printf("Enter product name: ");
    scanf("%s", product);

    while (product[i] != '\0') {
        i++;
    }

    printf("Length = %d", i);

    return 0;
}
