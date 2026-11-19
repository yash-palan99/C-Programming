#include <stdio.h>

int main()
{
    float bytes, KB, MB, GB;

    printf("Enter bytes: ");
    scanf("%f", &bytes);

    KB = bytes / 1024;
    MB = KB / 1024;
    GB = MB / 1024;

    printf("KB = %.2f\n", KB);
    printf("MB = %.2f\n", MB);
    printf("GB = %.2f\n", GB);

    return 0;
}