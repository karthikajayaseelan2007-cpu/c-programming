/*
Problem:
Create a structure Complex with real and imaginary parts.
Write a function addComplex() that accepts two structures
and returns the resulting structure representing their sum.
*/

#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

int main()
{
    struct Complex c1, c2, result;

    printf("Enter real and imaginary parts of first number: ");
    scanf("%f %f", &c1.real, &c1.imaginary);

    printf("Enter real and imaginary parts of second number: ");
    scanf("%f %f", &c2.real, &c2.imaginary);

    result = addComplex(c1, c2);

    printf("\nSum = %.2f + %.2fi\n", result.real, result.imaginary);

    return 0;
}
