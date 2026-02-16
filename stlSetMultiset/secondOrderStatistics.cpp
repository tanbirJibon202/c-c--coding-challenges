#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  set<int> st;
  for (int i = 0; i < n; i++)
  {
      int val;
      cin>>val;
      st.insert(val);
  }
  if(st.size()<2){
    cout<<"NO\n";
  }else{
    cout << *next(st.begin()) << endl;
  }
  
  return 0;
}