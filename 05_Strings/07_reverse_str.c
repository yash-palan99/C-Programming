#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    strrev(str);

    printf("Reverse string = %s", str);

    return 0;
}