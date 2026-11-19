#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    result = strcmp(str1, str2);

    if (result == 0)
    {
        printf("Both strings are same");
    }
    else if (result > 0)
    {
        printf("%s is greater", str1);
    }
    else
    {
        printf("%s is smaller", str1);
    }

    return 0;
}