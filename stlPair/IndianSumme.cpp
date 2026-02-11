#include <bits/stdc++.h>
using namespace std;
int main(){
  int num;
  cin>>num;
  set<pair<string,string>> str;
  for (int i = 0; i <num; i++)
  {
      string str1,str2;
      cin>>str1>>str2;
      str.insert({str1,str2});
  }
  cout<<str.size()<<'\n';
  
  return 0;
}