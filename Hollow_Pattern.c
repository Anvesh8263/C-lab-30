#include<stdio.h>
main()
{
 int i,size,j;
 printf("Enter size\n");
 scanf("%d",&size);
 for(i=1;i<=size;i++)
 {
  for(j=1;j<=size;j++)
  {

   if(i==1||i==size||j==1||j==size)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }
  printf("\n");
 }
}