#include <bits/stdc++.h>
using namespace std;
int main(){
  int q, k;
  cin>>q>>k;
  map<string,int>mp;
  for (int i = 0; i <q; i++)
  {
     string name;
     int cost;
     cin>>name>>cost;
     mp[name] = mp[name] + cost;
    //  cout<<mp[name]<<endl;
  }
  vector<int>vct;
  for(auto pair: mp)
  {
    // cout<<pair.first<<" "<<pair.second<<endl;
    vct.push_back(pair.second);
  }
  sort(vct.begin(),vct.end());
  reverse(vct.begin(),vct.end());
  int answer = 0;
  for (int i = 0; i <min((int)vct.size(),k); i++)
  {
     answer = answer + vct[i];
  }
  cout<<answer<<endl;
  
  
  return 0;
}