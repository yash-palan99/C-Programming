#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, largest, smallest;
    int *p = &a[0][0];

    printf("Enter 9 elements:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (p + i * 3 + j));
        }
    }

    largest = *p;
    smallest = *p;

    for (i = 0; i < 9; i++)
    {
        if (*(p + i) > largest)
            largest = *(p + i);

        if (*(p + i) < smallest)
            smallest = *(p + i);
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}