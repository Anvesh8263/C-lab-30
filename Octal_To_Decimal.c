#include<stdio.h>
#include<math.h>
main()
{
int dec=0,temp,i,inc=0,octal;
printf("Enter octal numer to convert to deciml number\n");
scanf("%d",&octal);
temp=octal;
while(temp!=0)
{
    i=temp%10;
    dec=dec+(i*pow(8,inc));
    temp=temp/10;
    inc++;
}
printf("Decimal number of %d is %d\n",octal,dec);
}