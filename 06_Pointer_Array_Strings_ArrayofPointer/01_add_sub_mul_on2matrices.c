#include <stdio.h>

int main()
{
    int a[2][2], b[2][2];
    int sum[2][2], sub[2][2], mul[2][2];
    int i, j, k;

    int (*p)[2] = a;
    int (*q)[2] = b;

    printf("Enter first matrix:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &q[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = p[i][j] + q[i][j];
            sub[i][j] = p[i][j] - q[i][j];
            mul[i][j] = 0;

            for (k = 0; k < 2; k++)
            {
                mul[i][j] += p[i][k] * q[k][j];
            }
        }
    }

    printf("Addition:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("Subtraction:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", sub[i][j]);
        printf("\n");
    }

    printf("Multiplication:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }

    return 0;
}