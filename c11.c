#include <stdio.h>

int main()
{
    float basic, da, hra, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    da = basic * 20 / 100;
    hra = basic * 10 / 100;

    gross = basic + da + hra;

    printf("DA = %.2f\n", da);
    printf("HRA = %.2f\n", hra);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
