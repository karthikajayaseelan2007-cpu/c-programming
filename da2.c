#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int sum = 0;
    float average;

    printf("Enter N: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    free(arr);

    return 0;
}
