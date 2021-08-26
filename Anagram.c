#include<stdio.h>
#include<math.h>
main()
{
  int num,i,j,temp,sum=0;;
  printf("Enter a number to know whether it is armstrong or not\n");
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
    i=num%10;
    sum+=i*i*i;
    num=num/10;
  }
  if(sum==temp)
  {
    printf("Giveb number %d is an armstrong number\n",temp);
  }
  else
  {
    printf("Giveb number %d is not an armstrong number since
         the sum of cubes of individual digits is %d\n",temp,sum);
  }
}