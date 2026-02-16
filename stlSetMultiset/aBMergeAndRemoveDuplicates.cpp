#include <iostream>
#include <set>
using namespace std;
int main(){
  int n, m;
  while (cin>>n)
  {
     cin>>m;
     set<int>st;
     int val;
     while (n--)
     {
        cin>>val;
        st.insert(val);
     }
     while (m--)
     {
       cin>>val;
       st.insert(val);
     }
     for (auto val : st)
     {
        cout<<val<<" ";
     }
     cout<<endl;
     

  }
  
  return 0;
}