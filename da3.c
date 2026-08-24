#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int newSize;

    printf("Enter N: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    newSize = n + 5;

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Enter 5 additional elements:\n");

    for (i = n; i < newSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("All elements are:\n");

    for (i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

