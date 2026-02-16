#include <bits/stdc++.h>
using namespace std;
int main(){
  while(1){
    int n, m;
    cin>>n>>m;
    if(n==0 && m==0){
      break;
    }
    set<int>st;
    while(n--){
      int val;
      cin>>val;
      st.insert(val);
    }
    int count = 0;
    while (m--)
    {
       int val;
       cin>>val;
       if(st.count(val)) count++;
    }
    cout<<count<<endl;
  }
  return 0;
}