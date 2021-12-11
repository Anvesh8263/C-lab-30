#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include<stdio.h>

int main()
{
 

    int n,A[100],num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&num);
    int k=0;
    for(int i=0;i<n;i++){
        if(A[i]==num){ k=1;
            for(int j=i;j<n-1;j++){
                A[i]=A[i+1];
            }
        }
    }
    if(k==0) printf("Not found.");
    else {
    for(int i=0;i<n-1;i++){
        printf("%d ",A[i]);
    }
    }
    
    return 0;
}