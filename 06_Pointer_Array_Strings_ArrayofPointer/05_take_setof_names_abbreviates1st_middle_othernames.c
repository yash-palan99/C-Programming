#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char *word, *next;

    printf("Enter full name: ");
    fgets(name, 100, stdin);

    name[strcspn(name, "\n")] = '\0';

    word = strtok(name, " ");

    while (word != NULL)
    {
        next = strtok(NULL, " ");

        if (next == NULL)
        {
            printf("%s", word);
        }
        else
        {
            printf("%c. ", word[0]);
        }

        word = next;
    }

    return 0;
}