#include<stdio.h>
#include<string.h>
main()
{
 int a,b,c;
 char choice[2];
 printf("Enter your Choice\n& for AND\n| for OR\n^ for XOR\n~ for Compliment\n<< for Left Shift\n>> for Right Shift\n");
 scanf("%s",choice);
 printf("Enter a and b\n");
 scanf("%d%d",&a,&b);
 if(strcmp(choice,"&")==0)
 {
  c=a&b;
  printf("%d & %d=%d\n",a,b,c);
 }
 else if(strcmp(choice,"|")==0)
 {
  c=a|b;
  printf("%d | %d=%d\n",a,b,c);
 }
 else if(strcmp(choice,"^")==0)
 {
  c=a^b;
  printf("%d ^ %d=%d\n",a,b,c);
 }
 else if(strcmp(choice,"~")==0)
 {
  printf("~ %d=%d\n",a,~a);
  printf("~ %d=%d\n",b,~b);
 }
 else if(strcmp(choice,"<<")==0)
 {
  c=a<<b;
  printf("%d << %d=%d\n",a,b,c);
 }
 else if(strcmp(choice,">>")==0)
 {
  c=a>>b;
  printf("%d >> %d=%d\n",a,b,c);
 }
 else
 {
  printf("Invalid Choice\n");
 }
}