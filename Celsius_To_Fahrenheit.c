#include<stdio.h>
main()
{
 float fahrenheit,celsius;
 printf("Enter celsius to convert to fahrenheit\n");
 scanf("%f",&celsius);

 fahrenheit=(float)((celsius)*(1.8)+(32));
 printf("%.2f degree in farenheit is %.2f\n",celsius,fahrenheit);
}