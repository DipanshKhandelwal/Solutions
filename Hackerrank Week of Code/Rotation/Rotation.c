#include <stdio.h>
#include <stdlib.h>

int main()
{  int n,i,times,p;

    printf("enter the no. of elements");
    scanf("%d",&n);

    printf("enter the no. of times u wanna rotate");
    scanf("%d",&times);

    int input[n-1];
    int output[n-1];

    printf("enter the elements!\n");
    for(i=0;i<n;i++){
        scanf("%d",&input[i]);
    }

    for(i=0;i<n;i++){
        output[i]=input[i];
    }

    for(p=0;p<times;p++){
        for(i=0;i<n;i++){
            input[0]=output[n-1];
            input[i+1]=output[i];
        }
        for(i=0;i<n;i++){
            output[i]=input[i];
        }
        for(i=0;i<n;i++){
            printf("%d ",output[i]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        printf("%d ",output[i]);
    }
    return 0;
}
