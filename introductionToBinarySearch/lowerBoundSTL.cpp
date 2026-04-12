#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n, q;
  cin>>n;
  vector<ll>arr(n);
  for (int i = 0; i <n; i++)
  {
       cin>>arr[i];
  }
  cin>>q;
  while (q--)
  {
      ll value,index;
      cin>>value;
      index = lower_bound(arr.begin(),arr.end(),value)-arr.begin();
      if( index < n && arr[index] == value){
        cout<<"Yes ";
      }else{
        cout<<"No ";
      }
      cout<<index+1<<"\n";
  }
  
  return 0;
}