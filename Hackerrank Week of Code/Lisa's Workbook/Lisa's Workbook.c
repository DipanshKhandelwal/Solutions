#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n,k,i,g,page=1,c=0;
  scanf("%d %d",&n,&k);
  int arr[n];

  for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++){
    for(g=1;g<=arr[i];g++){
      if(g==page){
        c++;
      }
      if(g==arr[i]){
        page++;
        break;
      }
      if(g%k==0){
        page++;
      }
    }
  }
  printf("%d",c);
  return 0;
}
