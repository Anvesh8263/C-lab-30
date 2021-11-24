#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i;
    char str[1000];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
        else if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    puts(str);   
    return 0;
}
