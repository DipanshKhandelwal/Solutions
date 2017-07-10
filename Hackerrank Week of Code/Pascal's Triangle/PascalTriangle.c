#include <stdio.h>
#include <stdlib.h>

int fact(int i){
  int a,k=1;
  for(a=1 ;a<=i ;a++){
  k=a*k;
  }
  return k;
}

int comb(int a, int b){
  int v;
  if(a-b!=0  && b!=0){
    v = fact(a) / (fact(b)*fact(a-b));
  }
  else{
    v=1;
  }
  return v;
}

int main(){
  int f,number,i,x,w,e;
  printf("enter a numbers to create a pascal triangle\n");
  scanf("%d",&number);
  for(f=1;f<=number;f++){
    for(e=1;e<=number-1-f;e++){
      printf(" ");
    }
    for(i=0;i<=f;i++){
      x=comb(f,i);
      printf("%d ",x);
    }
    printf("\n");
  }
  return 0;
}