#include<stdio.h>
main() 
{
 int dummy,n,rev=0,x;
 printf("Enter a number\n");
 scanf("%d",&n);
 dummy=n;
 while(n>0)
 {
   x=n%10;
   rev=rev*10+x;
   n=n/10;
 }
 if(dummy==rev)
 printf("The given number %d is a palindrome\n",rev);
 else
 printf("The given number %d is not a palindrome\n",rev);

}