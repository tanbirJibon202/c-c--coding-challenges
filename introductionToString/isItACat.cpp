#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) { 
        int n;
        cin >> n; 
        string str;
        cin >> str; 
        for (int i = 0; i < n; i++) {
            str[i] = tolower(str[i]);
        }
        string new_str;
        new_str += str[0];
        for (int i = 1; i < n; i++) {
            if (str[i] != str[i - 1]) {
                new_str += str[i];  
            }
        }
        if (new_str == "meow") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
