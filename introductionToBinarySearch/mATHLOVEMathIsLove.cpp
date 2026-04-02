#include <bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
    long long y;
    cin>>y;
    long long left = 0, right = 100000;
    long long answer = -1;
    while (left < right)
    {
      long long mid = left + (right - left) / 2;
      long long value = (mid * (mid+1))/2;
      if(value == y) {
        answer = mid;
        break;
      }else if(value < y){
        right = mid + 1;
      } else left = mid+1;
    }
    if (answer != -1){
      cout << answer << "\n";
    } else {
      cout << "NAI\n";
    } 
  }
  return 0; 
}