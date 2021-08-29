#include<stdio.h>
#include<string.h>
main()
{
char str[100],rev[100];
printf("Enter a string to know whether it is palindrome or not\n");
gets(str);
strcpy(rev,str);
if(strcmp(str,strrev(rev))==0)
{
    printf("The given string is Palindrome\n");
}
else
{
    printf("The given string is Not Palindrome\n");
}
}