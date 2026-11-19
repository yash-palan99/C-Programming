#include <stdio.h>

int main()
{
    int i, code, boys = 0, girls = 0;

    for (i = 1; i <= 50; i++)
    {
        printf("Enter sex code (1 for Boy, 2 for Girl): ");
        scanf("%d", &code);

        if (code == 1)
        {
            boys++;
        }
        else if (code == 2)
        {
            girls++;
        }
    }

    printf("Number of Boys = %d\n", boys);
    printf("Number of Girls = %d", girls);

    return 0;
}