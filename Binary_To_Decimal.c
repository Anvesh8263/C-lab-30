#include<stdio.h>
#include<math.h>
main()
{
int dec=0,temp,i,inc=0,binary;
printf("Enter a numer to convert to binary number\n");
scanf("%d",&binary);
temp=binary;
while(temp!=0)
{
i=temp%10;
dec=dec+(i*pow(2,inc));
temp=temp/10;
inc++;
}
printf("Decimal number of %d is %d\n",binary,dec);
}