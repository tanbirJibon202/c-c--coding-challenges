#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        string str = "aaa";
        n -= 3; 
        int temp = min(25, n); 
        // cout << "temp = " << temp << endl;
        str[2] += temp; 
        // cout << "After updating str[2]: " << str << endl;
        n -= temp; 
        // cout << "Remaining n after str[2]: " << n << endl;

        temp = min(25, n); 
        // cout << "temp for str[1]: " << temp << endl;
        str[1] += temp; 
        // cout << "After updating str[1]: " << str << endl;
        n -= temp; 
        // cout << "Remaining n after str[1]: " << n << endl;
        temp = min(25, n); 
        // cout << "temp for str[0]: " << temp << endl;
        str[0] += temp; 
        // cout << "After updating str[0]: " << str << endl;
        n -= temp; 
        // cout << "Remaining n after str[0]: " << n << endl;
        cout << str << endl; 
    }
    return 0;
}
