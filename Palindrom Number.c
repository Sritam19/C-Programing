#include <stdio.h>

int main()
{
    int n, a, b, c = 0;
    printf("Enter a Number:");
    scanf("%d", &n);
    a = n;
    while (n != 0)
    {
        b = n % 10;
        c = c * 10 + b;
        n = n / 10;
    }
    if (a == c)
        printf("%d is a Palindrome Number.", a);
    else
        printf("%d is not a Palindrome Number.", a);
    return 0;
}