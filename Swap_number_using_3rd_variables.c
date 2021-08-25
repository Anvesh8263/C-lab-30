#include<stdio.h>
main()
{
 int a,b,c;
 printf("Enter a\n");
 scanf("%d",&a);
 printf("Enter b\n");
 scanf("%d",&b);
 printf("The values of a is %d 
     and b is %d before swaping\n",a,b);
 c=a;
 a=b;
 b=c;
 printf("The values of a is %d
       and b is %d after swaping\n",a,b);
}