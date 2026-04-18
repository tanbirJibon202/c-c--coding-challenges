#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    multiset<int> ms;
    for (int i = 1; i <= k; i++){
        ms.insert(arr[i]);
    }
    for (int i = 1; i <= n-k+1; i++){
        int mn = *ms.begin();
        int mx = *ms.rbegin();
        cout << mn << " " << mx << endl;
          ms.erase(ms.find(arr[i]));
        if(i + k <= n){
            ms.insert(arr[i+k]);
         
        }
    }

    return 0;
}