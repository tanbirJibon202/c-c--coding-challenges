#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num; 
    vector<pair<int, pair<int, int>>> vct;
    for (int i = 0; i < num; i++) {
        int hour, minutes, second;
        cin >> hour >> minutes >> second;
        vct.push_back({hour, {minutes, second}});
    }
    sort(vct.begin(), vct.end());
    for (int i = 0; i < num; i++) {
        cout << vct[i].first << " " << vct[i].second.first << " " << vct[i].second.second << '\n';
    }

    return 0;
}
