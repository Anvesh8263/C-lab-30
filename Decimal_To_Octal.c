#include<stdio.h>
main()
{
int dec,temp,i,j=1,octal=0;
printf("Enter the decimal number : ");
scanf("%d",&dec);
temp=dec;
while(temp!=0)
{
i=temp%8;
octal=octal+(i*j);
temp=temp/8;
j=j*10;
}
printf("Octal number : %d\n",octal);
}