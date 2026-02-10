#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  vector<string> allStations;
  string str;
  for (int i = 0; i < n; i++)
  {
    cin >> str;
    allStations.push_back(str);
  }
  map<string, bool> express;
  for (int i = 0; i < m; i++)
  {
    cin >> str;
    express[str] = true;
  }
  for (int i = 0; i < allStations.size(); i++)
  {
    if(express[allStations[i]]){
      // cout << express[allStations[i]] << " ";
      cout << "Yes" << endl;
    } else {
      // cout << express[allStations[i]] << " ";
      cout << "No" << endl;
    }
  }
  

  return 0;
}