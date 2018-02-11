#include <iostream>

using namespace std;

int main()
{
  long long int test,patents, months, workers_pm, workers_total,even,odd,work;
  string workers;
  long long int complete;
  cin>>test;
  while(test--){
    cin>>patents>>months>>workers_pm>>workers_total>>workers;
    even = 0;
    odd = 0;
    for(long long int i=0;i<workers_total;i++){
      if(workers[i]=='E'){
        even++;
      }else{
        odd++;
      }
    }
    complete = 0;
    work = 0;
    for(long long int i=1;i<=months;i++){
      work=0;
      if(!complete){
        if(i%2==0){
          if(even > 0){
            if(even < workers_pm){
              work = even;
              even = 0;
            }else{
              work = workers_pm;
              even -= workers_pm;
            }
          }
        }else{
          if(odd > 0){
            if(odd < workers_pm){
              work = odd;
              odd = 0;
            }else{
              work = workers_pm;
              odd -= workers_pm;
            }
          }
        }
        patents -= work;
        if(patents <= 0){
          complete = 1;
          break;
        }
        if(even<=0 && odd<=0 && patents>0){
          break;
        }
      }else{
        break;
      }
    }
    if(complete){
      cout<<"yes"<<endl;
    }else{
      cout<<"no"<<endl;
    }
  }
}
