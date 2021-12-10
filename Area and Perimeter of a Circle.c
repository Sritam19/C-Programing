#include<stdio.h>
#define PI 3.14
int main()
 {
   float r,area,perimeter;
   printf("Enter the radius of the circle:");
   scanf("%f",&r);
   area=PI*r*r;
   printf("Area of the circle =%f",area);
   perimeter=2*PI*r;
   printf("\n Perimeter of the circle =%f",perimeter); 
   return 0;
 }