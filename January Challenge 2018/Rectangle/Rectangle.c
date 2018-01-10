#include<stdio.h>
 
void main(){
	int test,a,b,c,d;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		scanf("%d",&d);
 
		if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
