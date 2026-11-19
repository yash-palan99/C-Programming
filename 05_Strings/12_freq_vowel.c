#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, a = 0, e = 0, in = 0, o = 0, u = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    for (i = 0; i < strlen(str); i++)
    {
        switch (tolower(str[i]))
        {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': in++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    printf("Frequency of A = %d\n", a);
    printf("Frequency of E = %d\n", e);
    printf("Frequency of I = %d\n", in);
    printf("Frequency of O = %d\n", o);
    printf("Frequency of U = %d\n", u);

    return 0;
}