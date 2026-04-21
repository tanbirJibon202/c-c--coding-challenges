#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    queue<char> qu;
    for(char ch : s){
        qu.push(ch);
    }

    deque<char> window;
    map<char,int> cnt;

    for(int i = 0; i < s.size(); i++)
    {
        window.push_back(qu.front());
        cnt[qu.front()]++;
        qu.pop();
        if(cnt.size() == 3){
            break;
        }
    }

    int mn = s.size();


    while(1)
    {
        // cout << window.size() << endl;
        mn = min(mn, (int)window.size());
        for(int i = 0; i < window.size(); i++){
            cout << window[i];
        }
        cout << endl;
        char element = window.front();
        if(cnt[element] == 1){
            while(!qu.empty())
            {
                window.push_back(qu.front());
                cnt[qu.front()]++;
                qu.pop();
                if(cnt[element] > 1){
                    break;
                }
            }
        }

        window.pop_front();
        cnt[element]--;

        if(cnt[element] == 0){
            break;
        }
    }

    cout<<mn<<endl;

    return 0;
}