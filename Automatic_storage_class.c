#include<stdio.h>
void Hello();
main()
{
 int i=4;
 {
   int i=5;
  printf("Inside 1st bracket %d\n",i);
  {
    int i=6;
   printf("Inside 2nd bracket %d\n",i);
  }
 }
 Hello();
 printf("Inside main %d\n",i);
}

void Hello()
{
   int i=7;
  printf("In Hello Function %d\n",i);
}