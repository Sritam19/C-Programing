#include<stdio.h>
int main ()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j++){
            printf("%c",70-j);
        }
        printf("\n");
    }
    return 0; 
}