#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y){
    if(x > y) return true;
    return false;
}
int main(){
  int n;
  cin>>n;
  int answer = 0;
  vector<int>vct(n);
  for(auto &x : vct){
     cin>>x;
  }
  sort(vct.begin(), vct.end(), cmp);
  while (vct[1]>0)
  {
      answer++;
      vct[0]--;
      vct[1]--;
      sort(vct.begin(), vct.end(), cmp);
  }
  cout<<answer<<"\n";
  
  return 0;
}