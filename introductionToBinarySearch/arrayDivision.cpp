
// minimum possible maximum subarray sum


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll lo = 0, hi = 0;
    
    // max element  ≤ answer ≤ total sum
    for(int i = 0; i < n; i++){
        lo = max(lo, arr[i]);
        hi += arr[i];
    }

    ll ans;

    while(lo <= hi){
        ll mid = (lo + hi) / 2;

        ll temp = 0, count = 1;

        for(int i = 0; i < n; i++){
            temp += arr[i];

            if(temp > mid){
                count++;
                temp = arr[i];
            }
        }

        if(count > k){
            lo = mid + 1;
        }
        else{
            ans = mid;
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}