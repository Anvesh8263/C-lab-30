#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    char str[100];
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i+=2)
        printf("%c",str[i]);

    
    return 0;
}