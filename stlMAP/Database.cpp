#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin >> test;
  for(int tC = 1; tC <= test; tC++){
    int n, r;
    cin >> n >> r;
    map<pair<int, int>, bool> mark;
    string answer = "possible";
    for (int line = 0; line < r; line++)
    {
      int id, code;
      cin >> id >> code;
      if(mark[{id, code}]){
        answer = "impossible";
      } else {
        mark[{id, code}] = true;
      }
      
    }
    cout << "Scenario #" << tC << ": " << answer << endl;
  }
  return 0;
}