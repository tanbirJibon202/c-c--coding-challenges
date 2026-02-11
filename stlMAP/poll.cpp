#include <bits/stdc++.h>
using namespace std;
int main(){
  map<string,int>count;
  int n;
  cin>>n;
  string name;
  int maxCount = 0;
  for (int i = 0; i < n; i++)
  {
     cin>>name;
     count[name]++;
     maxCount = max(count[name], maxCount);
    //  cout<<maxCount<<endl;
  }
  for (auto pair: count)
  {
    if(pair.second == maxCount){
      cout<<pair.first<<endl;
    }
  } 
  return 0;
}


