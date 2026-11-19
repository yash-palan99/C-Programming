#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n && n > 0)
    {
        printf("Number is Perfect");
    }
    else
    {
        printf("Number is not Perfect");
    }

    return 0;
}