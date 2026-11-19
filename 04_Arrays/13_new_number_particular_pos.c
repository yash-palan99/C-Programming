#include <stdio.h>

int main()
{
    int a[10], n, i, num, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter new number: ");
    scanf("%d", &num);

    printf("Enter position: ");
    scanf("%d", &pos);

    if (n < 10 && pos >= 1 && pos <= n + 1)
    {
        for (i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = num;
        n++;

        printf("Array after insertion:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Invalid position or array is full");
    }

    return 0;
}