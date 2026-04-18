#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,t;
  cin>>n>>t;
  vector<ll>arr(n);
  for (int i = 0; i <n; i++)
  {
     cin>>arr[i];
  }
  ll hi = 1e18, lo = 0, mid, answer;
  while (hi>=lo)
  {
     mid = lo + (hi-lo)/2;
     ll k = 0;
     for (int i = 0; i <n; i++)
     {
         k = k + mid / arr[i];
         if(k>=t){
             break;
         }
     }
     if(k>=t){
      answer = mid;
      hi = mid - 1;
     }
     else{
      lo = mid + 1;
     }
  }
  cout<<answer<<"\n";
  return 0;
}