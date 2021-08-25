#include<stdio.h>
main()
{
  int i,n;
  printf("Enter a Number\n");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    if(i%2==1)
      printf("%d\n",i);
    else
      continue;
   }
   printf("\n");
}