#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    vector<int>arr;
    while (test--)
    {
        int type;
        cin>>type;
        if(type == 0){
          int x;
          cin>>x;
          arr.push_back(x);
        }
        else if(type == 1){
          int position;
          cin>>position;
          cout<<arr[position]<<'\n';
        }else{
          arr.pop_back();
        }
    }
    

    return 0;
}
