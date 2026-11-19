#include <stdio.h>

int main()
{
    int a[4][4], i, j, temp;

    printf("Enter values of 4x4 matrix:\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("Transpose of matrix:\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}