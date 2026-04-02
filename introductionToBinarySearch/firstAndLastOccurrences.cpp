#include <bits/stdc++.h>
using namespace std;
int main(){
  class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
       int left = -1, right = -1;
       auto it = lower_bound(arr.begin(), arr.end(), x);
       if(it == arr.end() || *it != x){
         return{left, right};
       }
       left = it - arr.begin();

      it = upper_bound(arr.begin(), arr.end(), x);
       right = it - arr.begin() - 1;
       return {left, right};
    }
};
  return 0;
}
