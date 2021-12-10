#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, n1, n2, m1, m2;

    printf("Enter the number of rows and columns of first matrix:");
    scanf("%d%d", &n1, &m1);
    printf("Enter the number of rows and columns of second matrix:");
    scanf("%d%d", &n2, &m2);

    if (n1 != n2 || m1 != m2)
    {
        printf("The sum is not possible");
    }
    else
    {
        printf("Enter the elements of first matrix:");

        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < m1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix:");

        for (i = 0; i < n2; i++)
        {
            for (j = 0; j < m2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("The sum of two matrices is : \n");

        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < m1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];

                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}