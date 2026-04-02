#include <bits/stdc++.h>  
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll target;
  cin>>target;
  ll left=0, right=n-1,mid, ans=-1;
  while(left<=right){
     mid = left + (right - left) / 2;
    if(arr[mid] == target){
      ans = mid;
      break;
    } else if(arr[mid] < target){
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  cout<<ans<<'\n';
  return 0;
}