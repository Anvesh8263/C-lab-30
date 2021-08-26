#include<stdio.h>
main()
{
  int number,factorial=1,i;
  printf("Enter a number for knowing it's factorial\n");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
   factorial=factorial*i;
  }
  printf("%d!=%d\n",number,factorial);
}