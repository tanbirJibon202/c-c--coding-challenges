#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;  
    string str;
    cin >> str;  
    for (int i = 0; i < n; i++) {
        if (str[i] == 'n' && str[i + 1] == 'a') {
            str.insert(i + 1, "y");
            n++;
        }
    }
    cout << str << '\n';  
    return 0;
}
