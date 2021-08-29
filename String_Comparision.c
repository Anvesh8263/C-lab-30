#include<stdio.h>
#include<string.h>
main()
{
int flag=0;
char str1[100],str2[100];
printf("Enter a string 1\n");
gets(str1);
printf("Enter a string 2\n");
gets(str2);
flag=strcmp(str1,str2);
if(flag==0)
{
    printf("Both strings are equal\n");
}
if(flag==-1)
{
    printf("String1 is less than string 2\n");
}
if(flag==1)
{
    printf("String 1 is greater than string 2\n");
}
}