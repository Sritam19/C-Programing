#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], d[10][10];
    int i, j, k, m1, n1, m2, n2, c, e, f, sum ;

    printf("Enter the number of rows and columns of the first matrix:");
    scanf("%d%d", &m1, &n1);
    printf("Enter the number of rows and columns of the second matrix:");
    scanf("%d%d", &m2, &n2);

    if (n1 != m2)
    {
        printf("The matrix multiplication is not possible");
    }
    else
    {
        printf("Enter the elements of the first matrix:\n");

        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");

            for (i = 0; i < m2; i++)
        {
            for (j = 0; j < n2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                sum=0;
                for (k = 0; k < n1; k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                d[i][j] = sum;
            }
        }

        printf("The multiplication of the two matrices is :\n");

        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                printf("%d\t", d[i][j]);
            }

            printf("\n");
        }
    }
}