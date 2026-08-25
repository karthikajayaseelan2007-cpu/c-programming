#include <stdio.h>

int main()
{
    int n, i, j = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)
    {
        if (a[i] != a[j])
        {
            j++;
            a[j] = a[i];
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i <= j; i++)
        printf("%d ", a[i]);

    return 0;
}
