#include <stdio.h>
int main()
{
  int a=5, b=3,c;
  int *p,*q;
  
  p=&a, q=&b,c=*p;
  
 printf("The value of a is %d\n",a);
 printf("The address of a is %d\n",p);
 printf("The value of a is %d\n",*p);
 printf("The address of p is %x\n",&p);
 printf("The value of c is %d",c);
 
 return 0;
 }