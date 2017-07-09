#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,c=0;
    scanf("%d",&n);
    int arr[n];

    int i;
    for(i = 0; i < n; i++)
        {
       scanf("%d",&arr[i]);
    }

    for(i=0;i<n;)
    {
        if(arr[i+2]!=0)
        {
            i=i+1;
            c++;
        }

        else if(arr[i+3]!=0)
        {
            i=i+2;
            c++;

        }

        else if(arr[i+1]!=0)
        {
            i=i+2;
            c++;

        }
        else{
            i=i+2;
            c++;
        }

        if(i==n-1)
        {

            break;
        }
    }
    printf("%d",c);

    return 0;
}
