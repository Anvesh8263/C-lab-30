#include<stdio.h>
#include<string.h>
main()
{
 int i;
 char str[100];
 printf("Enter a string to find ascii values of each letter\n");
 gets(str);
 for(i=0;i<strlen(str);i++)
 {
  printf("%c----->%d\n",str[i],str[i]);
 }
}