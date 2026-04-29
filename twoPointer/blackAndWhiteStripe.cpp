#include <bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin >> test;
  while(test--){
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int answer = k, l = 0, r = 0, cnt = 0;
    for (r = 0; r < k-1; r++){
        cnt += (str[r] == 'W');
    }
    for (l = 0; r < n; r++, l++){
        cnt += (str[r] == 'W');
        answer = min(answer, cnt);
        cnt -= (str[l] == 'W');
    }
    cout << answer << endl; 
  }
}