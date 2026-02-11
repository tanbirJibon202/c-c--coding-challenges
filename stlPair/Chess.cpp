#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool found = false;
        set<pair<int, int>> visited;
        visited.insert({x, y});
        for (int i = 0; i < 10000; ++i) { 
            for (char c : s) {
                if (c == 'N') {
                    y++;
                } else if (c == 'E') {
                    x++;
                } else if (c == 'S') {
                    y--;
                } else if (c == 'W') {
                    x--;
                }
                if (x == a && y == b) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
