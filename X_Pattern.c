#include<stdio.h>
main()
{
 int len,i,j,rows;
 printf("Enter number of rows\n");
 scanf("%d",&rows);
 for(i=0;i<rows;i++)
 {
  for(j=0;j<rows;j++)
  {
   if(i==j || i+j==rows-1)
   {
    printf("*");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
}