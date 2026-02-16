#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,p;
  cin>>n>>p;
  set<int>st;
  for (int i = 0; i < p; i++)
  {
     int val;
     cin>>val;
     st.insert(val);
  }
  int q;
  cin>>q;
  for (int i = 0; i < q; i++)
  {
     int val;
     cin>>val;
     st.insert(val);
  }
  if(st.size()>=n){
    cout<<"I become the guy."<<endl;
  }else{
    cout<<"Oh, my keyboard!"<<endl;
  }
  
  
  return 0;
}