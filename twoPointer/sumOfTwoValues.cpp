#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n, target;
  cin >> n >> target;
  vector<pair<ll, ll>> arr(n);
  for(ll i = 0; i < n; i++){
    cin >> arr[i].first;
    arr[i].second = i+1;
  }
  sort(arr.begin(), arr.end());
  int l = 0, r = n-1;
  while (r>=0)
  {
     while (arr[l].first + arr[r].first < target && l < r){
         l++;
     }
      if(l != r && arr[l].first + arr[r].first == target){
          cout << arr[r].second << " " << arr[l].second << endl;
          return 0;
      }
      r--;
  }
  cout << "IMPOSSIBLE" << endl;
  
  return 0;
}