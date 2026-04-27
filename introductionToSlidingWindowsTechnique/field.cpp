#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    queue<char> qu;
    for(char ch : str){
        qu.push(ch);
    }
    vector<int> vct(26, 0);
    int k;
    cin >> k;

    for(int i = 0; i < k; i++){
        int num;
        char ch;
        cin >> num >> ch;
        vct[ch - 'a'] = num;
    }

    queue<char> window;
    vector<int> cnt(26, 0);
    int condition_satisfy_count = 0;
    int answer = INT_MAX;
    while(!qu.empty()){
        char ch = qu.front();
        qu.pop();

        window.push(ch);
        cnt[ch - 'a']++;

        if(cnt[ch - 'a'] == vct[ch - 'a']){
            condition_satisfy_count++;
        }

        if(condition_satisfy_count == k){
            answer = window.size();
            break;
        }
    }
    while(!window.empty()){
        char ch = window.front();
        window.pop();
        if(cnt[ch - 'a'] == vct[ch - 'a']){
            condition_satisfy_count--;
        }
        cnt[ch - 'a']--;
        if(condition_satisfy_count != k){
            while(!qu.empty()){
                char ch = qu.front();
                qu.pop(); 

                window.push(ch);
                cnt[ch - 'a']++;

                if(cnt[ch - 'a'] == vct[ch - 'a']){
                    condition_satisfy_count++;
                }

                if(condition_satisfy_count == k){
                    break;
                }
            }
        }
        if(condition_satisfy_count == k){
            answer = min(answer, (int)window.size());
        }
        else{
            break;
        }
    }

    if(answer == INT_MAX) cout <<"Andy rapopo\n";
    else cout << answer << endl;

    return 0;
}