#include <stdio.h>

int main()
{
    float cel, fahr, kel;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    fahr = (cel * 9 / 5) + 32;
    kel = cel + 273.15;

    printf("Celsius = %.2f\n", cel);
    printf("Fahrenheit = %.2f\n", fahr);
    printf("Kelvin = %.2f\n", kel);

    return 0;
}
