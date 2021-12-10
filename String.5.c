#include <stdio.h>
#include <string.h>

int main ()
{
    int i,v; 

    char s1[20], s2[20];

    printf("Enter the first string:");
    gets (s1);

    printf("Enter the second string:");
    gets(s2);

    v=strcmp(s1,s2);
    if(v==0){
        printf("The strings are equal\n");
    }
    else 
    {
        printf("The strings are not equal\n");
    }
    printf("The value of v is %d",v);
    return 0;
}