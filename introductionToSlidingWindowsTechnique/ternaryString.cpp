#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string str;
        cin >> str;

        map<char,int> cnt;
        int left = 0;
        int answer = INT_MAX;

        for(int right = 0; right < str.size(); right++){
            cnt[str[right]]++;

            // check if valid (1,2,3 present)
            while(cnt['1'] > 0 && cnt['2'] > 0 && cnt['3'] > 0){
                answer = min(answer, right - left + 1);

                // shrink window
                cnt[str[left]]--;
                left++;
            }
        }

        if(answer == INT_MAX) cout << 0 << endl;
        else cout << answer << endl;
    }

    return 0;
}