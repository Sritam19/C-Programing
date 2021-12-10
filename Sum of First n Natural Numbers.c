#include <stdio.h>

int main()
{
    int i,a,sum=0;

    printf("Enter a number upto which the sum will be calculated:");
    scanf("%d",&a);

    for(i=0;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d",sum);

    return 0; 
}