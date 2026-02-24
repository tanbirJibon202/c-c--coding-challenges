#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            pq.push(val);
        }
        
        vector<int> result;

        while (!pq.empty()) {
            int t = pq.top();
            pq.pop();
            result.push_back(t);
            t /= 2;
            if (t > 0) {
                pq.push(t);
            }
        }
        
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < result.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}