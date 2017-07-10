#include <stdio.h>
#include <stdlib.h>

int main()
{   int number,remainder,quotient,i,k,l;
    int binary[100000];
    printf("enter a number to convert it into a binary no.\n");
    scanf("%d",&number);
    i=0;
    k=0;
    while(quotient!=0){
        remainder=number%2;
        quotient=number/2;
        number=quotient;
        binary[i]=remainder;
        i++;
        k++;
    }
    for(l=k ;l>=0 ;l--){
        printf("%d",binary[l]);
    }
    return 0;
}