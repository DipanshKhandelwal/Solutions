#include <iostream>
#include <limits>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
		int n;
		cin>>n;
		int amount[n];
		int type[n];
		for(int i=0;i<n;i++){
		    cin>>amount[i];
		}
		for(int i=0;i<n;i++){
		    cin>>type[i];
		}
		int minT=100005;
		int minA=100005;
		int minB=100005;
		for(int i=0;i<n;i++){
		    switch(type[i]) {
		        case 1:
		            if(amount[i] < minT) {
		                minT = amount[i];
		            }
		            break;
	            case 2:
		            if(amount[i] < minA) {
		                minA = amount[i];
		            }
		            break;
	            case 3:
		            if(amount[i] < minB) {
		                minB = amount[i];
		            }
		            break;
		    }
		}
		int ans = 0;
		
	    if(minA + minT < minB){
	        ans = minA + minT;
	    }else{
	        ans = minB;
	    }
		cout<<ans<<endl;
	return 0;
}
