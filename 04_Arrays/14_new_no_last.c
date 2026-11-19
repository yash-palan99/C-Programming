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

    if (n < 10)
    {
        a[n] = num;
        n++;

        printf("Array after insertion:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Array is full");
    }kn

    return 0;
}