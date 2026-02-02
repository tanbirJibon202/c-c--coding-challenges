#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        int n = s.size();
        cout<<n<<endl;
        int flag = 0;
        for (int i = 1; i < n / 2; i++) {
            if (s[i] != s[i - 1]) {
                flag = 1;
            }
        }
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}