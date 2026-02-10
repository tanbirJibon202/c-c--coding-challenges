#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n>> m;
  vector<string> list;
  map<string, bool> mp;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    list.push_back(s);
  }
  // for (int i = 0; i < list.size(); i++)
  // {
  //   cout << list[i] << endl;
  // }
  for (int i = 0; i < m; i++)
  {
    cin >> s;
    mp[s] = true;
  }
  // for (auto it = mp.begin(); it != mp.end(); it++)
  // {
  //   cout << it->first<<" "<<it->second<< endl;
  // }

  int count = 0;
  for(string str: list){
    string last3Digits = str.substr(str.size() - 3);
    if(mp[last3Digits]){
      count++;
    } 
  }
  cout << count << endl;
  return 0;
}