#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Ask the user to input two integers
    printf("Enter two integers: ");
    
    // Read and store the user inputs
    scanf("%d %d", &num1, &num2);

    // Calculate the sum using the + operator
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
