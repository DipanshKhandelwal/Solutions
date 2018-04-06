#include <iostream>
using namespace std;
 
int main() {
	long long int test, no_fingers;
	cin>>test;
	while(test--){
	    cin>>no_fingers;
	    long long int fingers[no_fingers], glove[no_fingers];
	    for(int i=0;i<no_fingers;i++){
	        cin>>fingers[i];
	    }
	    for(int i=0;i<no_fingers;i++){
	        cin>>glove[i];
	    }
	    int front = 1, back = 1;
	    for(int i=0;i<no_fingers;i++){
	        if(fingers[i] > glove[i]){
	            front = 0;
	            break;
	        }
	    }
	    for(int i=0;i<no_fingers;i++){
	        if(fingers[i] > glove[no_fingers-i-1]){
	            back = 0;
	            break;
	        }
	    }
	    if(front==1 && back==1){
	        cout<<"both"<<endl;
	    }else if(front==1){
	        cout<<"front"<<endl;
	    }else if(back==1){
	        cout<<"back"<<endl;
	    }else{
	        cout<<"none"<<endl;
	    }
	}
	return 0;
}
