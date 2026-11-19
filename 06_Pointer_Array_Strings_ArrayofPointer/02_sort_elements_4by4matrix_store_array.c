#include <stdio.h>

int main()
{
    int a[4][4], b[16];
    int i, j, temp;

    int *p = b;

    printf("Enter 16 elements:\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
            p[i * 4 + j] = a[i][j];
        }
    }

    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15 - i; j++)
        {
            if (p[j] > p[j + 1])
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");

    for (i = 0; i < 16; i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}