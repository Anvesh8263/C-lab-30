#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   char c,s[50],sen[100];
   
   scanf("%c%s\n%[^\n]s",&c,&s,&sen);
   
   printf("%c\n%s\n%s",c,s,sen);
       
    return 0;
}
