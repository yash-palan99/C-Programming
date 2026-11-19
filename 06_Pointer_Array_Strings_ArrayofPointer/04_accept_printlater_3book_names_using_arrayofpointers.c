#include <stdio.h>
#include <string.h>

int main()
{
    char b1[100], b2[100], b3[100];
    char *books[3] = {b1, b2, b3};
    int i;

    printf("Enter three book names:\n");

    for (i = 0; i < 3; i++)
    {
        fgets(books[i], 100, stdin);
        books[i][strcspn(books[i], "\n")] = '\0';
    }

    printf("Book names are:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", books[i]);
    }

    return 0;
}