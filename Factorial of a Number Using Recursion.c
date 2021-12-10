#include <stdio.h>

int fact(int);
int main()
{
    int m, n;
    printf(" Enter the number to find factorial :");
    scanf("%d", &n);

    m = fact(n);
    printf("Factorial of %d is %d", n, m);

    return 0;
}
int fact(int n)
{
    if (n == 0)
        return (1);
    return (n * fact(n - 1));
}