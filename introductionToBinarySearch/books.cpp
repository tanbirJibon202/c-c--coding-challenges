#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int n, time;
    cin >> n >> time;

    vector<ll> arr(n+1);

    for(int i = 1; i <=n; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }

    ll answer = 0;

    for(int i = 0; i < n; i++){
        ll k = upper_bound(arr.begin(), arr.end(), time + arr[i]) - arr.begin() - 1 - i;
        answer = max(answer, k);
    }

    cout << answer << "\n";

}