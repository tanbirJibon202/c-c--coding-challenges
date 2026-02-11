#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<pair<int, int>> p;
        
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            p.push_back({x, y});
        }

        sort(p.begin(), p.end(), cmp);

    
        for (auto const& element : p) {
    cout << element.first << " " << element.second << endl;
}
    }

    return 0;
}
