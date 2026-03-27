#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, q;
    cin>>n>>q;
    vector<ll> arr(n+1), pref_sum(n+1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        pref_sum[i] = pref_sum[i-1] + arr[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pref_sum[r] - pref_sum[l-1] << "\n";
    }
    return 0;
}