#include <stdio.h>
#include <stdlib.h>

struct phonebook{ 
  char name[50];
  int phonenumber;
  };


int main()
{   int n,i;
    scanf("%d",&n);
    struct phonebook arr[n];
    for(i=0;i<n;i++){
      scanf("%s %d",arr[i].name,&arr[i].phonenumber);
    }
    char arr2[50];
    while(1){   
      scanf("%s",arr2);
      for(i=0;i<=n;i++) {
        if(i<n) {
          if((strcmp(arr[i].name,arr2)==0)){
            printf("%s=%d\n",arr[i].name,arr[i].phonenumber);
            break;
          }
        }
        if(i==n){
          printf("Not found\n");
        }  
       }

      }
    return 0;
}
