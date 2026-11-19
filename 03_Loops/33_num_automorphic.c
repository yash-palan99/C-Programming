#include <stdio.h>

int main()
{
    int n, sq, temp, mod = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;
    temp = n;

    while (temp > 0)
    {
        mod = mod * 10;
        temp = temp / 10;
    }

    if (sq % mod == n)
    {
        printf("Number is Automorphic");
    }
    else
    {
        printf("Number is not Automorphic");
    }

    return 0;
}