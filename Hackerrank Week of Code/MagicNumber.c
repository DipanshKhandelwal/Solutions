#include<stdio.h>
#include<stdlib.h>

//A Number Is A Magic Number If Sum Of Its Digits Sum Up To One
int main()
{   int i,j,k,sum=0;
    printf("enter a no. to check if it is a magic number or not\n\n");
    scanf("%d",&i);
    printf("\n\n");
    j=i;

    while(i>9){
      while(j>0){  
        k=j%10;
        sum=sum+k;
        j=j/10;
      }
      i=sum;
      j=sum;
      sum=0;
    }
  if(i==1){
    printf("yes it is a magic number\n\n");
  }
  else{
    printf("no its not a magic number\n\n");
  }
  return 0;
}
