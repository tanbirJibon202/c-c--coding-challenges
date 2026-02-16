#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string str;
  cin>>str;
  set<char>st;
  for (int i = 0; i < n; i++)
  {
       st.insert(tolower(str[i]));
  }
  if(st.size() == 26) cout<<"YES\n";
  else cout<<"NO\n";
  
  return 0;
}