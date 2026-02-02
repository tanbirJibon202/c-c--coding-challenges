#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n,k;
        cin>>n>>k;
        string str = "";
        for (int i = 0; i < k; i++)
        {
           str += ('a'+ i) ;
           cout<<str;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<str;
        }
        cout<<'\n';
    }
    
}