#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n,value;
  cin>>n;
  ll hi = n*n, lo = 1, mid, answer = 0;
  ll middle = n*n/2+1;
  while (hi>=lo)
  {
     mid = (hi+lo)/2;
     ll l = 0, r = 0;
     for (int i = 1; i<=n; i++)
     {
         l = l + min(n,(mid-1)/i);
         r = r + min(n,mid/i);
     }
     if(middle>l && middle<=r){
       answer = mid;
       break;
     }
     if(r<middle){
      lo = mid + 1;
     }
     else{
      hi = mid-1;
     }
  }
  cout<<answer<<"\n";
   

  return 0;
}