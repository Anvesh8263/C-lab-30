#include<stdio.h>
main()
{
 int i,j,rows,col,temp;
 printf("Enter number of rows and columns of a matrix\n");
 scanf("%d %d",&rows,&col);


 int a[rows][col],t[rows][col];
 //Taking input of matrix
 printf("Enter Matrix 1\n");
 for(i=0;i<rows;i++)
 {
  for(j=0;j<col;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Given /matrix is\n");
   for(i=0;i<rows;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("%d\t",a[i][j]);
  }

  printf("\n");
 }
 //Exchanging rows and columns
 temp=rows;
 rows=col;
 col=temp;
  //Transpose of matrix
 for(i=0;i<rows;i++)
 {
  for(j=0;j<col;j++)
  {
   t[i][j]=a[j][i];
  }
 }

 printf("Transpose of above matrix is\n");

  for(i=0;i<rows;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("%d\t",t[i][j]);
  }

  printf("\n");
 }

}