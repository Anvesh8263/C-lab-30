#include<stdio.h>
main()
{
    int i,num,end;
    printf("Enter a number for which you want table\n");
    scanf("%d",&num);
    printf("Enter a number till where \nyou want multiplication with %d\n",num);
    scanf("%d",&end);
    printf("Multiplication table of %d is\n",num);
    for(i=1;i<=end;i++)
    {
     printf("%d x %d = %d\n",num,i,num*i);
    }
}