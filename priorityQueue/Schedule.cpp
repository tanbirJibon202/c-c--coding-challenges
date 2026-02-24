#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<pair<int, int>> vct;
        for (int i = 0; i < n; i++) {
            int dateLine, reward;
            cin >> dateLine >> reward;
            vct.push_back({dateLine, reward});
        }
        sort(vct.begin(), vct.end()); 
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            pq.push(vct[i].second);
            if (vct[i].first < (int)pq.size()) {
                pq.pop();
            }
        }
        long long answer = 0;
        while (!pq.empty()) {
            answer += pq.top();
            pq.pop();
        }
        cout << answer << "\n";
    }
    return 0;
}