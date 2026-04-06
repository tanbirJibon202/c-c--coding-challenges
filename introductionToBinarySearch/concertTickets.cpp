#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,value;
  cin>>n>>m;
  multiset<int>st;
  for (int i = 0; i <n; i++)
  {
     cin>>value;
     st.insert(value);  

  }
  st.insert(-1);
  while (m--)
  {
     cin>>value;
     auto t = st.upper_bound(value);
     t--;
     cout<<*t<<"\n";
     if(*t != -1){
        st.erase(t);
     }
  }
  
  
  return 0;
}