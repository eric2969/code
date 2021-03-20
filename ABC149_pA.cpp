#include <bits/stdc++.h>
using namespace std;

signed main(){
  bool prime;
  int a;
  cin>>a;
  while(1){
    prime=1;
    for(int i=2,j=1;i<=sqrt(a);i+=j,j=2){
      if(!(a%i)){
        prime=0;
        break;
      }
    }
    if(prime){
      cout<<a<<'\n';
      break;
    }
    else a++;
  }
}
