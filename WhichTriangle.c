#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a==b && b==c)
        printf("Equilateral");
    else if(a==b || a==c || b==c)
        printf("Isosceles");
    else
        printf("Scalene");
    return 0;
}