#include <stdio.h>

int main()
{
    float p, r, n, i;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &n);

    i = (p * r * n) / 100;

    printf("Interest = %.2f", i);

    return 0;
}