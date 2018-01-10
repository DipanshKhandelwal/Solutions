#include<stdio.h>

void main(){
	int test,n;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&n);
		long long int array[n][n];
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%lld",&array[i][j]);
			}
		}
		long long int maxNow=0,maxOld=0,sum=0;
		for(j=n-1;j>=0;j--){
			if(array[n-1][j] > maxOld){
				maxOld = array[n-1][j];
			}
		}
		sum += maxOld;
		for(i=n-2;i>=0;i--){
			maxNow = 0;
			for(j=n-1;j>=0;j--){
				if(array[i][j]<maxOld && array[i][j]>maxNow){
					maxNow = array[i][j];
				}
			}
			if(maxNow == 0){
				sum = -1;
				break;
			}else{
				maxOld = maxNow;
				sum += maxOld;
			}
		}
		printf("%lld\n",sum);
	}
}
