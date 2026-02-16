#include <bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
  set<char>st;
  for (auto ch : str)
  {
     st.insert(ch);
  }
  if(st.size()== str.size()) cout<<"yes\n";
  else cout<<"no\n";
  
  return 0;
}