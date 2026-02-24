#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, k;
    if (!(cin >> n >> k)) return 0;
    
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++) {
        ll val;
        cin >> val;
        pq.push(val);  
    }

    if (pq.empty()) {
        if (k == 0) cout << 0 << endl;
        else cout << -1 << endl;
        return 0;
    }

    int operations = 0;
    while (pq.size() > 1 && pq.top() < k) {
        ll first_val = pq.top();
        pq.pop();
        ll second_val = pq.top();
        pq.pop();
        
        pq.push(first_val + 2 * second_val);
        operations++;
    }

  
    if (pq.top() < k) {
        cout << -1 << endl;
    } else {
        cout << operations << endl;
    }

    return 0;
}