/*Write a program to determine whether the entered number is positive, 
negative, or zero using decision control statements.*/



#include <stdio.h>

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0){
    printf("Positive");
    }
    else if (n <0){
        printf("Negative");
    }
    else {
        printf("Zero");
    }

    return 0;
}
