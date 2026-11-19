#include <stdio.h>

int main()
{
    int a[10], n, i, num, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Value found at position %d", i + 1);
    }
    else
    {
        printf("Value not found");
    }

    return 0;
}