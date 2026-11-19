#include <stdio.h>

int main()
{
    int i;
    float num, sum = 0, mean;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter value: ");
        scanf("%f", &num);

        sum = sum + num;
    }

    mean = sum / 10;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f", mean);

    return 0;
}