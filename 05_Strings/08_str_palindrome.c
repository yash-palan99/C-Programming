#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    strcpy(temp, str);

    strrev(temp);

    if (strcmp(str, temp) == 0)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Palindrome");
    }

    return 0;
}