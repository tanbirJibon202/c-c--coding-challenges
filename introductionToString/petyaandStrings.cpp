#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int size = a.length();
    for (int i = 0; i < size; i++) {
      a[i] = tolower(a[i]);
    }

    for(auto& it : b) {
      it = tolower(it);
    }

    if (a < b) {
      cout << -1 << '\n';
    } else if (a > b) {
      cout << 1 << '\n';
    } else {
      cout << 0 << '\n';
    }
    return 0;
}