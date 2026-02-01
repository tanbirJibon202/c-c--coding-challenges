#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<string> str;
  for (int i = 0; i < n; i++) {
      string temp;
      cin>>temp;
      str.push_back(temp);
  }
  reverse(str.begin(), str.end());
  for (int i = 0; i < n; i++) {
      cout<<str[i]<<'\n';
  }
  
  return 0;
}