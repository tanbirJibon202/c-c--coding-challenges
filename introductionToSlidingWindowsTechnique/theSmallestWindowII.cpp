#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> cnt(k + 1, 0);
    int have = 0;
    int left = 0;
    int ans = INT_MAX;

    for(int right = 0; right < n; right++){

        if(arr[right] >= 1 && arr[right] <= k){
            if(cnt[arr[right]] == 0) have++;
            cnt[arr[right]]++;
        }

        while(have == k){
            ans = min(ans, right - left + 1);

            if(arr[left] >= 1 && arr[left] <= k){
                cnt[arr[left]]--;
                if(cnt[arr[left]] == 0) have--;
            }
            left++;
        }
    }

    if(ans == INT_MAX) cout << 0 << endl;
    else cout << ans << endl;

    return 0;
}