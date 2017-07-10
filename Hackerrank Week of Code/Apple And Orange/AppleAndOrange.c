#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int s;
    long long int t;
    scanf("%lld %lld",&s,&t);
    long long int a;
    long long int b;
    scanf("%lld %lld",&a,&b);
    long long int m;
    long long int n;
    scanf("%lld %lld",&m,&n);

    long long int apple[m];
    long long int orange[n];
    long long int p=0;
    long long int i,o=0;

    for(i=0;i<m;i++){
        scanf("%lld",&apple[i]);
        if(apple[i]>0 && s-a<=apple[i] && apple[i]<=t-a){
            p++;
        }
    }

    for(i=0;i<n;i++){
        scanf("%lld",&orange[i]);
        if(orange[i]<0 && t-b>=orange[i] && s-b<=orange[i]){
            o++;
        }
    }
    
    printf("%lld\n%lld",p,o);
    return 0;
}
