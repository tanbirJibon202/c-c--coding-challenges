#include <bits/stdc++.h>
using namespace std;
int main() {
    // map<int, int> m;
    // m[0] = 2;
    // m[10] = 20; 
    // m[-5] = 10;
    // cout<<m[0]<<endl;
    // cout<<m[10]<<endl;  
    // cout<<m[-5]<<endl;
    // cout<<m[100]<<endl;
    // m[10] = 30;
    // cout<<m[10]<<endl;

    map<string, int> m;
    m["mahmudul"] = 1;
    m["ritu"] = 2;
    m["abid"] = 3;
    cout<<m["mahmudul"]<<endl;
    cout<<m["ritu"]<<endl;  
    cout<<m["abid"]<<endl;
    cout<<m.size()<<endl;
     m["abid"] = 1;
    cout<<m["abid"]<<endl;
    cout<<m.size()<<endl;

    return 0;
}