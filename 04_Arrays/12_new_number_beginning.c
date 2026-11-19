#include <stdio.h>

int main()
{
    int a[10], n, i, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter new number: ");
    scanf("%d", &num);

    for (i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = num;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}