#include <stdio.h>
int main()
{
    char op;
    int a, b;

    printf("Choose the operator: ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case '+':
        printf("%d + %d =%d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d =%d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d =%d\n", a, b, a * b);
        break;
    case '/':
        printf("%d / %d =%d\n", a, b, a / b);
        break;

    default:
        printf("Invalid Operator.");
    }

    return 0;
}