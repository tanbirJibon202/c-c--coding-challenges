#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

  int n,k;
  cin >> n >> k;  

  queue<int> qu;
  for (int i = 0; i < n; i++)
  {
     int value;
     cin >> value;
     qu.push(value);
  }

  queue<int> window;
  map<int,int> cnt;

  ll answer = 0;

  while (!qu.empty())
  {
      int value = qu.front();
      qu.pop();

      window.push(value);
      cnt[value]++;

      if(cnt.size() > k){
         while (cnt.size() > k)
         {
            int value = window.front();
            window.pop();

            cnt[value]--;

            if(cnt[value] == 0){
              cnt.erase(value);
            }
         }
      }

      answer += window.size();
  }

  cout << answer << endl;

  return 0;
}