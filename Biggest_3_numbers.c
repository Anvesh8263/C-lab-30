#include<stdio.h>
main()
{
  int num1,num2,num3;
  printf("Enter a number 1\n");
  scanf("%d",&num1);
  printf("Enter a number 2\n");
  scanf("%d",&num2);
  printf("Enter a number 3\n");
  scanf("%d",&num3);
  if((num1>num2) && (num1>num3))
  {
     printf("%d is bigger\n",num1);
  }
  else if((num2>num1) && (num2>num3))
  {
    printf("%d is bigger\n",num2);
  }
  else
  {
    printf("%d is bigger\n",num3);
  }
}