#include <stdio.h>

int main()
{
    int i, positive = 0, negative = 0, zero = 0;
    float n;

    for (i = 1; i <= 200; i++)
    {
        printf("Enter value: ");
        scanf("%f", &n);

        if (n > 0)
        {
            positive++;
        }
        else if (n < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeroes = %d", zero);

    return 0;
}