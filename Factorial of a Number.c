#include <stdio.h>

int main()
{
    int fac = 1, i, a, b = 1;

    printf("Enter a number to calculate it's factorial:");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("The factorial is 1");
    }
    else
    {
        for (i = 1; i <= a; i++)
        {
            fac = fac * i;
        }

        printf("The factorial of %d is %d", a, fac);
    }

    return 0;
}