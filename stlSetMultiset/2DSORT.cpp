#include <bits/stdc++.h>
using namespace std;
int main(){
  int test;
  scanf("%d",&test);
  while (test--){
      int n;
      scanf("%d",&n); 
      multiset<pair<int,int>> mst;
      while (n--){
          int x, y;
          scanf("%d %d", &x, &y);
          mst.insert({x, -y});
      }
      for (auto [x, y] : mst){
        printf("%d %d\n", x, -y);
      }
  }
  return 0;
}
