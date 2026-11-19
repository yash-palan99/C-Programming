#include <stdio.h>

int main()
{
    float l, a, p;

    printf("Enter side of square: ");
    scanf("%f", &l);

    a = l * l;
    p = 4 * l;

    printf("Area = %.2f\n", a);
    printf("Perimeter = %.2f", p);

    return 0;
}