#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll> arr(n);
  for (int i = 0; i <n; i++)
  {
      cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  multiset<ll>arr_2;
  for (int i = 0; i <m; i++)
  {
     ll value;
     cin>>value;
     arr_2.insert(value);
  }
  ll answer = 0;
  for (int i = 0; i <n; i++)
  {
     auto it = arr_2.lower_bound(arr[i]-k);
     if(it != arr_2.end() && *it<=arr[i]+k){
      answer++;
      arr_2.erase(it);
     }
  }
  cout<<answer<<"\n";
  
  return 0;
}