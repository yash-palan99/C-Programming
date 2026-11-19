#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("Largest = %d\n", a);
        printf("Smallest = %d", b);
    }
    else if (b > a)
    {
        printf("Largest = %d\n", b);
        printf("Smallest = %d", a);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}