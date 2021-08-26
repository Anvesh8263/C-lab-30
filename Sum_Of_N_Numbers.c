#include<stdio.h>
main()
{
  int i,n,sum=0;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    sum=sum+i;
  }
  printf("%d\n",sum);
}