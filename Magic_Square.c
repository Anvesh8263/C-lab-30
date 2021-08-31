#include<stdio.h>
main()
{
 int i,j,row,col,size;
 printf("Enter Number of Rows in odd number\n");
 scanf("%d",&size);
 if(size%2!=0)
 {
  int a[size][size];
  printf("Magic Square for %d rows is\n",size);
  row=0;
  col=size/2;
  for(i=1;i<=size*size;i++)
  {

   a[row][col]=i;
   row--;
   col++;
   if(i%size==0)
   {
        row=row+2;
        col=col-1;
        if(row==size)
        row=row-size;
   }
   else
   {
    if(col==size)
       col=col-size;
             if(row<0)
                row=row+size;
   }
  }
  for(i=0;i<size;i++)
  {
   for(j=0;j<size;j++)
   {
    printf("%3d  ",a[i][j]);
   }
   printf("\n");
  }
 }
 else
 {
  printf("Please Enter Odd Number to get Magic Square\n");
 }
}