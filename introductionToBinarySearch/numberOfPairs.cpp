#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int test;
    cin >> test;
    while(test--){
        ll n, l, r, ans = 0;
        cin >> n >> l >> r;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++){
            ll t = upper_bound(arr.begin(), arr.end(), r - arr[i]) 
                 - lower_bound(arr.begin(), arr.end(), l - arr[i]);
            if(l <= arr[i] + arr[i] && arr[i] + arr[i] <= r){
                t--;
            }
            ans += t;
        }
        cout << ans / 2 << "\n"; 
    }

    return 0;
}