#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
         int n,A[100];
         scanf("%d",&n);
         for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        }
    int temp;
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
              temp=A[i];
              A[i]=A[j];
              A[j]=temp;
        }
          for(int i=0;i<n;i++)
              {
                  printf("%d ",A[i]);
              }
    return 0;
}