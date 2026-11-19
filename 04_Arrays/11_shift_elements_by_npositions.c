#include <stdio.h>

int main()
{
    int a[10], b[10] = {0};
    int i, n;
    char ch;

    printf("Enter 10 values:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions: ");
    scanf("%d", &n);

    printf("Enter L for Left or R for Right: ");
    scanf(" %c", &ch);

    if (n >= 0 && n < 10)
    {
        if (ch == 'L' || ch == 'l')
        {
            for (i = 0; i < 10 - n; i++)
            {
                b[i] = a[i + n];
            }
        }
        else if (ch == 'R' || ch == 'r')
        {
            for (i = n; i < 10; i++)
            {
                b[i] = a[i - n];
            }
        }
    }

    printf("Shifted array:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}