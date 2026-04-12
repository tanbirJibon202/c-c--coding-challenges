#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> need(n), have(n);
    for (int i = 0; i < n; i++) cin >> need[i];
    for (int i = 0; i < n; i++) cin >> have[i];

    ll low = 0, high = 3000; 
    ll ans = 0;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll powder_required = 0;

        for (int i = 0; i < n; i++) {
            ll shortage = (need[i] * mid) - have[i];
            
            if (shortage > 0) {
                powder_required += shortage;
            }
            if (powder_required > k) break;
        }

        if (powder_required <= k) {
            ans = mid;    
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }

    cout << ans << endl;
    return 0;
}