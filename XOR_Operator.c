#include<stdio.h>
main()
{
 int a,b,i,temp;
 printf("A  B  Output\n");
 for(i=0;i<4;i++)
 {
  temp=i;
  a=temp%2;
  temp/=2;
  b=temp%2;
  printf("%d %2d %3d\n",a,b,a^b);
 }
}