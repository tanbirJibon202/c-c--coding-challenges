#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  set<int>st;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin>>val;
    st.insert(val);
  }

  int count = 0;
  for(auto y : st){
     count += st.count(y-k);
  }
  cout<<count<<"\n";
  return 0;
}