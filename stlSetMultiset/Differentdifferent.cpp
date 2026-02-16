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
  cout<<st.size()<<endl;
  
  return 0;
}