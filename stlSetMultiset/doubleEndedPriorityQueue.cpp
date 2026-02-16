#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,q;
  cin>>n>>q;
  multiset<int> mst;
  for (int i = 0; i < n; i++)
  {
      int val;
      cin>>val;
      mst.insert(val);
  }
  while (q--)
  {
      int type;
      cin>>type;
      if(type==0){
        int val;
        cin>>val;
        mst.insert(val);
      }else if(type == 1){
        cout<<*mst.begin()<<endl;
        mst.erase(mst.begin());
      }else{
        cout<<*(--mst.end())<<endl;
        mst.erase(--mst.end());
      }
  }
  
  
  return 0;
}