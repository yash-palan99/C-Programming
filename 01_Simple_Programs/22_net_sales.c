#include <stdio.h>

int main()
{
    float gs, discount, ns;

    printf("Enter gross sales: ");
    scanf("%f", &gs);

    discount = gs * 10 / 100;

    ns = gs - discount;

    printf("Net Sales = %.2f", ns);

    return 0;
}