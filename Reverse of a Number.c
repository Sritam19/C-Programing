#include <stdio.h>

int main()
{

    int num, rev = 0, remainder;

    printf("Enter the number to reverse: ");

    scanf("%d", &num);

    while (num != 0)
    {

        remainder = num % 10;

        rev = rev * 10 + remainder;

        num = num / 10;
    }

    printf("The reversed number of %d is: %d", num, rev);

    return 0;
}