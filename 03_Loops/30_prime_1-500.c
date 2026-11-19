#include <stdio.h>

int main()
{
    int n, i, flag;

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
            printf("%d ", n);
        }
    }

    return 0;
}