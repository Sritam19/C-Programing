#include<stdio.h>
int main()
{
 int a[10][10];
 int i,j,m,n;
 printf("Enter number of rows and columns of a matrix:\n");
 scanf("%d %d",&m,&n);
 printf("Enter the elements of the matrix\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("The Matrix is\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
 printf("The transpose of the Matrix is\n");
 for(j=0;j<n;j++)
 {
  for(i=0;i<m;i++)
  {
   printf("%d",a[i][j]);
  }
  printf("\n");
 }
 return 0;
}