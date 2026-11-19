#include <stdio.h>

int main()
{
    float s1, s2, s3, total, avg;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    total = s1 + s2 + s3;
    avg = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    if (s1 < 35 || s2 < 35 || s3 < 35)
    {
        printf("Grade = Fail");
    }
    else if (avg >= 70)
    {
        printf("Grade = Distinction");
    }
    else if (avg >= 60)
    {
        printf("Grade = First Class");
    }
    else if (avg >= 50)
    {
        printf("Grade = Second Class");
    }
    else if (avg >= 35)
    {
        printf("Grade = Third Class");
    }
    else
    {
        printf("Grade = Fail");
    }

    return 0;
}