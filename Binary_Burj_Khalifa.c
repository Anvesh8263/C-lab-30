#include<stdio.h>
int main()
{
    int i,j,c[4],a=0,k,l,t,x,y=0,m;
    scanf("%d",&t);
    x=t;
    while(x!=0)
    {
        int r=x%2;
        x=x/2;
        y++;
    }
    for(i=0;i<=t;i++)
    {
        if(i==0)
        {
            for(m=1;m<=y-1;m++)
    {
        printf(" ");
    }
    printf("0");
}
        j=i;
        while(j!=0)
        {
        c[a]=j%2;
        j=j/2;
        a++;
    }
    for(k=1;k<=(y-a);k++)
    {
        printf(" ");
    }
    for(l=(a-1);l>=0;l--)
    {
            printf("%d",c[l]);
    }
    printf("\n");
    a=0;
}
}