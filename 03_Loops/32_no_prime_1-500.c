#include <stdio.h>

int main()
{
    int n, i, flag, count = 0;

    for (n = 2; n <= 500; n++)
    {
        flag = 0;

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            count++;
        }
    }

    printf("Total prime numbers = %d", count);

    return 0;
}