#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, q;
  cin>>n>>q;
  stack<int>sk[n];
  for (int i = 0; i < q; i++)
  {
    int type;
    cin>>type;
    if(type==0){
      int t,x;
      cin>>t>>x;
      sk[t].push(x);
    }
    else if(type == 1){
         int t;
         cin>>t;
         if(sk[t].empty()){
           
         }else{
          cout<<sk[t].top()<<endl;
         }
    }else{
      int t;
      cin>>t;
      if(!sk[t].empty()){
         sk[t].pop();
      }
    }
  }
  
  return 0;
}