#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i,temp,l;
    char str[1000];
    gets(str);
    l=strlen(str);
    if(l%2==0)
    {
            for(i=0;str[i]!='\0';i+=2){
                
                temp=str[i+1];
                str[i+1]=str[i];
                str[i]=temp;
            }
            puts(str);   
        }
        else
            printf("Odd length.");
      
    return 0;
}
