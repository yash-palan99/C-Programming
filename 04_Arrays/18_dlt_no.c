#include <stdio.h>

int main()
{
    int a[10], n, i, num, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        for (i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Number not found");
    }

    return 0;
}