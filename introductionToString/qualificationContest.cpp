#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<string> str;
    string str2;
    for (int i = 0; i < n; i++) {
        cin >> str2;
        if(i < k){
            str.push_back(str2);
        }
    }
    sort(str.begin(), str.end());
    for (int i = 0; i < k; i++) { 
        cout << str[i] << endl;
    }
    return 0;
}