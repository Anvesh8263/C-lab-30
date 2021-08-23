#include<stdio.h>
int main()

{

	float base1,base2,height,area;

	printf("enter base1 of parallelogram: ");

	scanf("%f",&base1);

	printf("enter base2 of parallelogram: ");

	scanf("%f",&base2);

	printf("enter height of the parallelogram: ");

	scanf("%f",&height);

	area=((base1+base2)/2 )*height;

	printf("AOP: %f\n",area);

	return 0;

}