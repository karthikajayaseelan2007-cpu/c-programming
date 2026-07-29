#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("MY NAME IS: %s", name);

    return 0;
}
