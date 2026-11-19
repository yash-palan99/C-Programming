#include <stdio.h>

int main()
{
    float gs, allowance, deduction, ns;

    printf("Enter gross salary: ");
    scanf("%f", &gs);

    allowance = gs * 10 / 100;
    deduction = gs * 3 / 100;

    ns = gs + allowance - deduction;

    printf("Net Salary = %.2f", ns);

    return 0;
}