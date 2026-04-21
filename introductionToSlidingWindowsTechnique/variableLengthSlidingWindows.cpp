#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int mx = 0;
    map<int, int> mp;
    deque<int> dq;
    for (int i = 1; i <= n; i++)
    {
        if(mp[arr[i]] == 1){
            while (1)
            {
                int value = dq.front();
                dq.pop_front();
                mp[value] = 0;

                if(value == arr[i]){
                    break;
                }
            }
        }
        dq.push_back(arr[i]);
        mp[arr[i]] = 1;
        // cout << dq.size() << endl;
        mx = max(mx, (int)dq.size());
    }
    cout<<mx<<endl;
    return 0;
}