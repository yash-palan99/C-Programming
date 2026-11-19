#include <stdio.h>

int main()
{
    int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount, i, count, total = 0;

    printf("Enter amount: ");
    scanf("%d", &amount);

    for (i = 0; i < 9; i++)
    {
        count = amount / notes[i];

        if (count > 0)
        {
            printf("%d notes of Rs. %d\n", count, notes[i]);
            total = total + count;
            amount = amount % notes[i];
        }
    }

    printf("Minimum number of notes = %d", total);

    return 0;
}