#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++){
    cin>>arr[i];
  }
  int k;
  cin>>k;
  multiset<int> window;
  for (int i = 0; i < k; i++){
      window.insert(arr[i]);
  }
  for (int i = 0; i < n; i++){
      cout << *window.rbegin() << " ";
      window.erase(window.find(arr[i]));
      if(i + k >= n){
         break;
      }
      window.insert(arr[i + k]);
  }

  return 0;
}