#include <bits/stdc++.h>
using namespace std;
int main(){
  
    int n, m;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    set<int>st;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
       int val;
       cin>>val;
       st.insert(val);
    }
    vector<int>vct;
    for (int i = 0; i < n; i++)
    {
       if(st.count(arr[i])==0){
         vct.push_back(arr[i]);
       }
    }
    cout<<vct.size()<<endl;
    for(auto val : vct)
    {
       cout<<val<<" ";
    }
    cout<<"\n";

  return 0;
}