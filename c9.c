#include <stdio.h>

int main()
{
    int total, h, m, s;

    printf("Enter duration in seconds: ");
    scanf("%d", &total);

    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;

    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}
