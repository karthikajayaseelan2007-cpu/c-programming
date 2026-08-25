#include <stdio.h>

int main()
{
    int n, target, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                printf("Pair: %d %d", a[i], a[j]);
                return 0;
            }
        }
    }

    printf("No pair found");

    return 0;
}
