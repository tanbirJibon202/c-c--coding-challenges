#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  set<int>st;
  while (n--)
  {
     int val;
     cin>>val;
     st.insert(val);
  }
  int m;
  cin>>m;
  while (m--)
  {
     int val;
     cin>>val;
     if(st.count(val)) cout<<"YES\n";
     else cout<<"NO\n";
  }
  
  
  return 0;
}