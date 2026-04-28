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
  for (int i = 0; i < n ; i++)
  {
    int l = i + 1, r = n - 1;
    ll current_Target = target - arr[i].first;

    while (l < r)  
    {
      if (arr[l].first + arr[r].first == current_Target){
        cout << arr[l].second << " " << arr[r].second << " " << arr[i].second << endl;
        return 0;
      }
      else if (arr[l].first + arr[r].first < current_Target){
        l++;  
      }
      else{
        r--;  
      }
    }
  }

  cout << "IMPOSSIBLE" << endl;   

  return 0;
}